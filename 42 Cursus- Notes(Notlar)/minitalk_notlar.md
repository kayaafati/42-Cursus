# **Minitalk**

### **Kill function**
İnt kill(pid_t, int sig);
Pid tarafından belirtilen bir işlem veya işlem grubuna bir sinyal gönderir. Gönderilecek sinyal sig tarafından belirtilir ve kill komutu, işlemin pis tarafından belirtilen işlemlerden herhangi birine sinyal gönderme izni varsa başarılıdır. Kill başarılı olmazsa sinyal gönderilmez. Kill fonksiyonu başarısız olursa -1 döndürür erno ayarlanır. aski takdirde 0 döndürür. Sadece işlem başlatmak için değil işlem sonlandırmak için de sinyal gönderilebilir. Mesela, işlem durdurmak için SIGSTOP sinyalini bir işlemi sürdürmek içinde SIGCONT sinyalini gönderebiliriz. Bellekte bir işlem yapmışken başka bir işlemi çalıştırmak istediğimiz için programı yeniden başlattığımızda önceden başlatılan işlemi bellekten kaldırmak için de kill komutu kullanılabilir.
Hata durumları
-> sig bağımsız değişkenin değeri geçersiz veya desteklenmeyen bir sinyal numarasıdır.
->kill Komutunun, sinyali herhangi bir alıcı işleme gönderme izni yoktur.
->pid ile belirtilene karşılık gelen hiçbir işlem veya işlem grubu bulunamadı.

### **PID**
Her işlem bir tür değeri olan bir işlem kimlik numarasıyla adlandırılır. Oluşturulduğunda her işleme bir işlem kimliği tahsis edilir. pid_t veri türü, işlem kimliğini temsil edebilen işaretli bir tamsayı türüdür.
C programlamada pis için get_pid ve get_ppid komutları kullanılır.

### **getpid**
unistd.h kütüphanesindedir.
Çağıran işlemin işlem kimliğini almak için kullanılan işlevdir. Her defasında farklı bir id almamızı sağlar. Id’yi döndürür.

### **getppid**
unistd.h kütüphanesindedir.
Bu fonksiyon, üst fonksiyonun işlem kimliğini döndürür. (This function returns the process id of the parent function.)

### **Minitalk’ta Kullanılan Bazı Operatörler**

  | 	—> bit düzeyinde VEYA operatörü
  
 |<<	—> sola kay ('|' işareti dahil değil)

 |>>	—> sağa kay ('|' işareti dahil değil)

  &	—> bit düzeyinde VE operatörü


#### **Kullanılmayan Operatörler**

  ^	—> bit düzeyinde özel VEYA

  ~	—> bit düzeyinde tamamlayıcı
