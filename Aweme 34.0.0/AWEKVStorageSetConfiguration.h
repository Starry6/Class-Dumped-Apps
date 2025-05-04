@interface AWEKVStorageSetConfiguration : AWEKVStorageConfiguration
@property (nonatomic) BOOL needBackup;
- (BOOL)needBackup;
- (void)setNeedBackup:;
- (id)init;
+ (id)configurationWithOptions:;
+ (double)expireTime:;
@end
