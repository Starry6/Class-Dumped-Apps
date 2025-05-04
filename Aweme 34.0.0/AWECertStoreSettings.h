@interface AWECertStoreSettings : NSObject
@property (nonatomic) BOOL certStatementEnabled;
- (BOOL)certStatementEnabled;
- (void)setCertStatementEnabled:;
- (id)init;
+ (BOOL)certStatementEnabled;
+ (void)setCertStatementEnabled:;
+ (id)sharedSettings;
@end
