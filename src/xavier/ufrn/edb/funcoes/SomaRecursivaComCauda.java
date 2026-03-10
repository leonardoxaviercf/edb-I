package xavier.ufrn.edb.funcoes;

public class SomaRecursivaComCauda {
    public static void main(String[] args) {
        int teste = somaCauda(4, 3);
        System.out.println(teste);
    }
    public static int somaCauda(int a, int b){
        if (b == 0) {
            return a;
        }
        return somaCauda(a + 1, b -1);
    }
}
