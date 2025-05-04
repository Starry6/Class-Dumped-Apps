@interface AWEHPHambSettingsStorage : NSObject
@property (nonatomic) MMKV mmkv;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)writeSettings:error:;
- (BOOL)readSettings:error:;
- (void).cxx_destruct;
@end
