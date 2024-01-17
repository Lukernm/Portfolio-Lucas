/* Nome: Lucas Ribeiro Nunes de Morais
   R.A: 28276105
   Turma: 3°semestre CIC, noturno
   Professor: João Ortiz*/

import javax.swing.*;
public class PostoMenuView {

    public PostoMenuView() {
        PostoConfig postConfig = new PostoConfig();

        JOptionPane.showMessageDialog(null, "Bem vindo(a) ao Posto de Gasolina Excalibur !!!", "Bem vindo", JOptionPane.INFORMATION_MESSAGE);

        String msgMenu1 = "";
        String msgMenu2 = "";
        String msgMenu3 = "";
        String msgMenu4 = "";
        String msgMenu5 = "";
        String msgMenu6 = "";

        int opcao, opcao2, opcao3, opcao4, opcao5, opcao6;

        msgMenu1+= "Escolha a opção que deseja: \n";
        msgMenu1 += "1 - Administração do posto;\n";
        msgMenu1 += "2 - Serviços ao cliente;\n";
        msgMenu1 += "3 - Encerrar sessão;";

        msgMenu2 += "Escolha a opção que deseja: \n";
        msgMenu2 += "1 - Abastecimento dos tanques;\n";
        msgMenu2 += "2 - Relatório dos tanques;\n";
        msgMenu2 += "3 - Relatório de vendas;\n";
        msgMenu2 += "4 - Relatório de despesas;\n";
        msgMenu2 += "5 - Relatório de lucros;\n";
        msgMenu2 += "6 - Voltar;";

        msgMenu3 += "Escolha o tanque que será abastecido:\n";
        msgMenu3 += "1 - Tanque de Etanol;\n";
        msgMenu3 += "2 - Tanque de Gasolina comum;\n";
        msgMenu3 += "3 - Tanque de Gasolina Aditivada;\n";
        msgMenu3 += "4 - Tanque de Diesel;\n";
        msgMenu3 += "5 - Voltar;";

        msgMenu4 += "Escolha a opção que deseja:\n";
        msgMenu4 += "1 - Abastecer Automóvel;\n";
        msgMenu4 += "2 - Serviços Adicionais;\n";
        msgMenu4 += "3 - Voltar;";

        msgMenu5 += "Escolha o combustível que deseja abastecer seu automóvel:\n";
        msgMenu5 += "      COMBUSTÍVEL       |    PREÇO";
        msgMenu5 += "1 - Etanol              |  R$ 2,39 / L\n";
        msgMenu5 += "2 - Gasolina comum      |  R$ 3,49 / L\n";
        msgMenu5 += "3 - Gasolina Aditivada  |  R$ 3,69 / L\n";
        msgMenu5 += "4 - Diesel              |  R$ 2,89 / L\n";
        msgMenu5 += "5 - Voltar;";

        msgMenu6 += "Escolha o serviço adicional que deseja:\n";
        msgMenu5 += "      COMBUSTÍVEL       |    PREÇO";
        msgMenu6 += "1 - Ducha Ecológica     |  R$ 8,00\n";
        msgMenu6 += "2 - Troca de óleo       |  R$ 50,00\n";
        msgMenu6 += "3 - Balanceamento       |  R$ 35,00\n";
        msgMenu6 += "4 - Café                |  R$ 2,00\n";
        msgMenu6 += "5 - Voltar;";

       
        do {
            opcao = Integer.parseInt(JOptionPane.showInputDialog(null, msgMenu1, "Posto de Gasolina Excalibur", JOptionPane.INFORMATION_MESSAGE));

            if (opcao == 1) {

                do {
                    
                    opcao2 = Integer.parseInt(JOptionPane.showInputDialog(null, msgMenu2, "Administração", JOptionPane.INFORMATION_MESSAGE));
                    if (opcao2 == 1) { 
                        do {
                            opcao3 = Integer.parseInt(JOptionPane.showInputDialog(null, msgMenu3, "Abastecimento - Posto", JOptionPane.INFORMATION_MESSAGE));
                            if (opcao3 == 1) {
                                int tmpEtanol = Integer.parseInt(JOptionPane.showInputDialog(null, "Você escolheu o tanque de Etanol\n Digite a quantidade que deseja abastecer:", "Etanol", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerTanque(opcao3, tmpEtanol);
                            } else if (opcao3 == 2) {
                                int tmpGasComum = Integer.parseInt(JOptionPane.showInputDialog(null, "Você escolheu o tanque de Gasolina Comum\n Digite a quantidade que deseja abastecer:", "Gasolina Comum", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerTanque(opcao3, tmpGasComum);
                            } else if (opcao3 == 3) {
                                int tmpGasAditivada = Integer.parseInt(JOptionPane.showInputDialog(null, "Você escolheu o tanque de Gasolina Aditivada\n Digite a quantidade que deseja abastecer:", "Gasolina Aditivada", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerTanque(opcao3, tmpGasAditivada);
                            } else if (opcao3 == 4) {
                                int tmpDiesel = Integer.parseInt(JOptionPane.showInputDialog(null, "Você escolheu o tanque de Diesel\n Digite a quantidade que deseja abastecer:", "Diesel", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerTanque(opcao3, tmpDiesel);
                            } else if (opcao3 != 5) {
                                JOptionPane.showMessageDialog(null, "A opção que escolheu não é válida", "Erro", JOptionPane.ERROR_MESSAGE);
                            }
                        } while (opcao3 != 5);
                    } else if (opcao2 == 2) { 
                        JOptionPane.showMessageDialog(null, postConfig.relatorioTanques(), "Relatório - Tanques", JOptionPane.INFORMATION_MESSAGE);
                    } else if (opcao2 == 3) { 
                        JOptionPane.showMessageDialog(null, postConfig.relatorioVendas(), "Relatório - Vendas", JOptionPane.INFORMATION_MESSAGE);
                    } else if (opcao2 == 4) { 
                        JOptionPane.showMessageDialog(null, postConfig.relatorioDespesas(), "Relatório - Despesas", JOptionPane.INFORMATION_MESSAGE);
                    } else if (opcao2 == 5) { 
                        JOptionPane.showMessageDialog(null, postConfig.relatorioLucros(), "Relatório - Lucros", JOptionPane.INFORMATION_MESSAGE);
                    } else if (opcao2 != 6) {
                        JOptionPane.showMessageDialog(null, "Opção inválida", "Erro", JOptionPane.ERROR_MESSAGE);
                    }

                } while (opcao2 != 6);

            } else if (opcao == 2) { 
                do {
                    opcao4 = Integer.parseInt(JOptionPane.showInputDialog(null, msgMenu4, "Posto Excalibur", JOptionPane.INFORMATION_MESSAGE));
                    if (opcao4 == 1) {
                        do {
                            opcao5 = Integer.parseInt(JOptionPane.showInputDialog(null, msgMenu5, "Bombas de combustível", JOptionPane.INFORMATION_MESSAGE));
                            if (opcao5 == 1) {
                                float tmpEtanol2 = Float.parseFloat(JOptionPane.showInputDialog(null, "Bomba de Etanol\nDigite o valor em R$ a ser abastecido:", "Etanol", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerCarro(opcao5, tmpEtanol2);
                            } else if (opcao5 == 2) {
                                float tmpGasComum2 = Float.parseFloat(JOptionPane.showInputDialog(null, "Bomba de Gasolina Comum\nDigite o valor em R$ a ser abastecido:", "Gasolina Comum", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerCarro(opcao5, tmpGasComum2);
                            } else if (opcao5 == 3) {
                                float tmpGasAditivada2 = Float.parseFloat(JOptionPane.showInputDialog(null, "Bomba de Gasolina Aditivada\nDigite o valor em R$ a ser abastecido:", "Gasolina Aditivada", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerCarro(opcao5, tmpGasAditivada2);
                            } else if (opcao5 == 4) {
                                float tmpDiesel2 = Float.parseFloat(JOptionPane.showInputDialog(null, "Bomba de Diesel\nDigite o valor em R$ a ser abastecido:", "Diesel", JOptionPane.INFORMATION_MESSAGE));
                                postConfig.abastecerCarro(opcao5, tmpDiesel2);
                            } else if (opcao5 != 5) {
                                JOptionPane.showMessageDialog(null, "Opção inválida", "Erro", JOptionPane.ERROR_MESSAGE);
                            }
                        } while (opcao5 != 5);
                    } else if (opcao4 == 2) {
                        do {
                            opcao6 = Integer.parseInt(JOptionPane.showInputDialog(null, msgMenu6, "Serviços Adicionais", JOptionPane.INFORMATION_MESSAGE));
                            if (opcao6 == 1) {
                                postConfig.venderServico(opcao6);
                            } else if (opcao6 == 2) {
                                postConfig.venderServico(opcao6);
                            } else if (opcao6 == 3) {
                                postConfig.venderServico(opcao6);
                            } else if (opcao6 == 4) {
                                postConfig.venderServico(opcao6);
                            } else if (opcao6 != 5) {
                                JOptionPane.showMessageDialog(null, "A opção que escolheu não é válida", "Erro", JOptionPane.ERROR_MESSAGE);
                            }
                        } while (opcao6 != 5);
                    } else if (opcao4 != 3) {
                        JOptionPane.showMessageDialog(null, "A opção que escolheu não é válida", "Erro", JOptionPane.ERROR_MESSAGE);
                    }
                } while (opcao4 != 3);
            } else if (opcao != 3) {
                JOptionPane.showMessageDialog(null, "A opção que escolheu não é válida", "Erro", JOptionPane.ERROR_MESSAGE);
            }

        } while (opcao != 3);

    }

}

