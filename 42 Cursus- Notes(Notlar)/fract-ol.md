# **Fract-ol**

## **Karmaşık Sayılar**

x ve y reel sayı olmak üzere
Z = x + yi ——>karmaşık sayının reel kısmı Re(z) = x
			karmaşık sayının sanal kısmı İm(z) = y
şeklindeki ifadelerdir.

### **Karmaşık sayının eşleniği**
İ’li sayının katsayısına ait işaret değişiyor. (+ ilse -, - ise +)
Z₁ = 2 + 3i —> Z₁(eşlenik) = 2 - 3i

Karmaşık sayının eşleniği x eksenine göre simetriktir.
Z.Z(eşlenik) = (x+yi).(x-yi) = x² + y²

### **2 karmaşık sayının eşitliği**
Z₁ = a + bi
Z² = x + yi
Z₁ = Z²	—>Re(Z₁) = Re(Z²)
		   İm(Z₁) = İm(Z²)

a + bi = x + yi —-> a =x ve y = b

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

## **-Notlar-**
16’lık sistem kullanılarak renk kullanımı yapılabilir.

Web sayfalarında kullanılan biçim ("gösterim") #RRGGBB şeklindedir ; burada RR ne kadar Kırmızı (iki onaltılık basamak kullanılarak), GG ne kadar Yeşil ve BB ne kadar Mavidir.
Örnek : güzel bir mavi tonu şunlardan oluşur:
* 		64/255 Kırmızı,
* 		48/255 Yeşil
* 		255/255 (yani tam) Mavi
Yani ondalık olarak (64, 48.255), onaltılık olarak (40, 30, FF)'ye eşittir ve #4030FF olarak kodlanmıştır.

0, 0, 0 —> siyah
255.255.255 —> beyaz (#FFFFFF)

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

## **Bilgisayar Grafiklerinde Optimizasyon**

Fractal’da optimizasyon olmalı, yavaş olmamalı/çalışmamalı.

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

## **Minilibx**

İnfografi projeleri için kullanılan C ile yazılmış çok temel bir grafik kitaplığıdır. Bir pencereyi hızla açmanıza ve içinde çizim yapmanıza izin veren bazı temel işlevleri uygulamaya yarar.

## **int main**

int main’lerde return(0) başarılı bir dönüş anlamına gelir, return(1) ise başarısız bir dönüş anlamına gelir.

### **mlx’s function**

mlx_init() —> yazılan program ile ekran arasındaki bağlantıyı başlatmaya yarar. Bağlantı başarısız olursa NULL döndürür, bağlantı başarılı olursa NULL olmayan pointer döndürür. 

### **mlx_new_window & mlx_clear_window & mlx_destroy_window**

* void * mlx_new_window(void *mlx_ptr, int size_x, int size_y, char *title); —> ekrana pencere açmamızı sağlar. size_x ve size_y parametrelerini pencere boyutunu belirlemek için kullanarak ekranda yeni bir pencere oluşturur. 

## **mlx_clear_window**
ekranı siyahla temizler, ekrana siyahlar pixeller basarak temizleme işlemi yapar.

* int     mlx_clear_window(void *mlx_ptr, void *win_ptr); —> mlx_ptr ekran bağlantı, win_ptr pencere tanımlayıcısıdır.
 
## **mlx_destroy_window**
pencereyi kapatmak için kullanılır.

* int     mlx_destroy_window(void *mlx_ptr, void *win_ptr)

mlx_destroy_window ve mlc_clear_window Hiçbir şey döndürmüyor.

### **mlx_pixel_put & mlx_string_put**

* int mlx_pixel_put(void *mlx_ptr, void *win_ptr, int x, int y, int color); —> bu işlev, (x,y) koordinatlarını ve belirtilen rengi kullanarak win_ptr penceresinde tanımlanmış bir piksel çizer. 
Orijin (0,0) pencerenin sol üst köşesidir. x ve y ekseni sırasıyla sağa ve aşağıya işaret eder.

##### **İki işlev için de bağlantı tanımlayıcısı mlx_ptr gereklidir.** #####

### **.m Dosya Uzantısı**

Bir M dosyası, Objective-C ile yazılmış programlar tarafından kullanılan bir sınıf uygulama dosyasıdır. 
Bir m tipi dosya, MATLAB Kaynak Kodu dosya formatıdır. 
Bunlar, grafikleri çizmek algoritmaları çalıştırmak ve matematiksel işlevleri çalıştırmak amacıyla kullanılacak MATLAB programı için komut dosyalarını ve işlevleri depolayan metin dosyalarıdır. 
Objective-C Uygulama dosyaları m dosya uzantısını kullanır.
