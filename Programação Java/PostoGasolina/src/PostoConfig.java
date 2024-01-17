/* Nome: Lucas Ribeiro Nunes de Morais
   R.A: 28276105
   Turma: 3°semestre CIC, noturno
   Professor: João Ortiz*/

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class PostoConfig {

    DecimalFormat df = new DecimalFormat("0.000"); 
    DecimalFormat rs = new DecimalFormat("0.00"); 

    public float[] tanques = new float[4]; 
    public int[] servicos = new int[5]; 
    public float[] litrosVendidos = new float[5]; 
    public float[] litrosComprados = new float[5]; 
    public float despesaCombustiveis;
    public float lucroCombustiveis;
    public float lucroServicos;

    public PostoConfig() { 
        for (int i = 0; i < 4; i++) {
            this.tanques[i] = 0;
        }
    }

    public void abastecerTanque(int tanque, int valor) { 
        if (tanque == 1) { 

            if ((this.tanques[0] + valor) <= 20000 && (valor > 0)) {
                this.tanques[0] += valor;
                this.litrosComprados[0] += valor;
                this.litrosComprados[4] += valor;
                this.despesaCombustiveis += (valor * 1.19);
                JOptionPane.showMessageDialog(null, "Tanque abastecido com sucesso !!!", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[0] == 20000 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "O tanque está cheio!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if ((this.tanques[0] + valor) > 2000) {
                JOptionPane.showMessageDialog(null, "O valor excede a capacidade do tanque!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        } else if (tanque == 2) {

            if ((this.tanques[1] + valor) <= 20000 && (valor > 0)) {
                this.tanques[1] += valor;
                this.litrosComprados[1] += valor;
                this.litrosComprados[4] += valor;
                this.despesaCombustiveis += (valor * 2.19);
                JOptionPane.showMessageDialog(null, "Tanque abastecido com sucesso !!!", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[1] == 20000 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "O tanque está cheio!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if ((this.tanques[1] + valor) > 2000) {
                JOptionPane.showMessageDialog(null, "O valor excede a capacidade do tanque!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        } else if (tanque == 3) {

            if ((this.tanques[2] + valor) <= 20000 && (valor > 0)) {
                this.tanques[2] += valor;
                this.litrosComprados[2] += valor;
                this.litrosComprados[4] += valor;
                this.despesaCombustiveis += (valor * 2.29);
                JOptionPane.showMessageDialog(null, "Tanque abastecido com sucesso !!!", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[2] == 20000 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "O tanque está cheio!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if ((this.tanques[2] + valor) > 2000) {
                JOptionPane.showMessageDialog(null, "O valor excede a capacidade do tanque!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        } else if (tanque == 4) {

            if ((this.tanques[3] + valor) <= 20000 && (valor > 0)) {
                this.tanques[3] += valor;
                this.litrosComprados[3] += valor;
                this.litrosComprados[4] += valor;
                this.despesaCombustiveis += (valor * 1.39);
                JOptionPane.showMessageDialog(null, "Tanque abastecido com sucesso !!!", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[3] == 20000 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "O tanque está cheio!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if ((this.tanques[3] + valor) > 2000) {
                JOptionPane.showMessageDialog(null, "O valor excede a capacidade do tanque!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        }
    }

    public void abastecerCarro(int tmpCombustivel, float valor) {
        float tmpLitros;

        if (tmpCombustivel == 1) {

            tmpLitros = (float) (valor / 2.39);

            if ((this.tanques[0] - tmpLitros) >= 0 && (valor > 0)) {
                this.tanques[0] -= tmpLitros;
                this.litrosVendidos[0] += tmpLitros;
                this.litrosVendidos[4] += tmpLitros;
                this.lucroCombustiveis += valor;
                JOptionPane.showMessageDialog(null, "Abastecimento efetuado !!!\n" + df.format(tmpLitros) + " Litros", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[0] == 0 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "A bomba de Etanol está vazia !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if (tmpLitros > this.tanques[0]) {
                JOptionPane.showMessageDialog(null, "Não há combustível o suficiente !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        } else if (tmpCombustivel == 2) {

            tmpLitros = (float) (valor / 3.49);

            if ((this.tanques[1] - tmpLitros) >= 0 && (valor > 0)) {
                this.tanques[1] -= tmpLitros;
                this.litrosVendidos[1] += tmpLitros;
                this.litrosVendidos[4] += tmpLitros;
                this.lucroCombustiveis += valor;
                JOptionPane.showMessageDialog(null, "Abastecimento efetuado !!!\n" + df.format(tmpLitros) + " Litros", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[1] == 0 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "A bomba de Gasolina Comum está vazia !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if (tmpLitros > this.tanques[1]) {
                JOptionPane.showMessageDialog(null, "Não há combustível o suficiente !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        } else if (tmpCombustivel == 3) {

            tmpLitros = (float) (valor / 3.69);

            if ((this.tanques[2] - tmpLitros) >= 0 && (valor > 0)) {
                this.tanques[2] -= tmpLitros;
                this.litrosVendidos[2] += tmpLitros;
                this.litrosVendidos[4] += tmpLitros;
                this.lucroCombustiveis += valor;
                JOptionPane.showMessageDialog(null, "Abastecimento efetuado !!!\n" + df.format(tmpLitros) + " Litros", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[2] == 0 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "A bomba de Gasolina Aditivada está vazia !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if (tmpLitros > this.tanques[2]) {
                JOptionPane.showMessageDialog(null, "Não há combustível o suficiente !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        } else if (tmpCombustivel == 4) {

            tmpLitros = (float) (valor / 2.89);

            if ((this.tanques[3] - tmpLitros) >= 0 && (valor > 0)) {
                this.tanques[3] -= tmpLitros;
                this.litrosVendidos[3] += tmpLitros;
                this.litrosVendidos[4] += tmpLitros;
                this.lucroCombustiveis += valor;
                JOptionPane.showMessageDialog(null, "Abastecimento efetuado !!!\n" + df.format(tmpLitros) + " Litros", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
            } else if (this.tanques[3] == 0 && (valor > 0)) {
                JOptionPane.showMessageDialog(null, "A bomba de Diesel está vazia !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            } else if (valor <= 0) {
                JOptionPane.showMessageDialog(null, "Erro, valor negativo !!!", "Erro", JOptionPane.ERROR_MESSAGE);
            } else if (tmpLitros > this.tanques[3]) {
                JOptionPane.showMessageDialog(null, "Não há combustível o suficiente !!!", "Erro", JOptionPane.WARNING_MESSAGE);
            }

        }
    }

    public String relatorioTanques() {
        String tmpRelatorioTanques = "";

        tmpRelatorioTanques += "Situação atual dos tanques:\n";
        tmpRelatorioTanques += "1 - Etanol: " + df.format(this.tanques[0]) + " litros\n";
        tmpRelatorioTanques += "2 - Gasolina Comum: " + df.format(this.tanques[1]) + " litros\n";
        tmpRelatorioTanques += "3 - Gasolina Aditivada: " + df.format(this.tanques[2]) + " litros\n";
        tmpRelatorioTanques += "4 - Diesel: " + df.format(this.tanques[3]) + " litros\n";

        return tmpRelatorioTanques;
    }

    public void venderServico(int servico) {
        if (servico == 1) {
            this.servicos[0]++;
            this.servicos[4]++;
            this.lucroServicos += 8.00;
            JOptionPane.showMessageDialog(null, "A ducha no seu veículo foi efetuada !!!\nValor: RS 8,00", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
        } else if (servico == 2) {
            this.servicos[1]++;
            this.servicos[4]++;
            this.lucroServicos += 50.00;
            JOptionPane.showMessageDialog(null, "A troca de óleo do seu veículo foi efetuada !!!\nValor: R$ 50,00", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
        } else if (servico == 3) {
            this.servicos[2]++;
            this.servicos[4]++;
            this.lucroServicos += 35.00;
            JOptionPane.showMessageDialog(null, "O balanceamento do seu veículo foi efetuado !!!\nValor: RS 35,00", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
        } else if (servico == 4) {
            this.servicos[3]++;
            this.servicos[4]++;
            this.lucroServicos += 2.00;
            JOptionPane.showMessageDialog(null, "Você comprou um Café !!!\nValor: RS 2,00", "Confirmado", JOptionPane.INFORMATION_MESSAGE);
        }
    }

}