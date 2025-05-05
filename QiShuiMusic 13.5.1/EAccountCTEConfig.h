@interface EAccountCTEConfig : NSObject
@property (nonatomic) NSString timestampDomain;
@property (nonatomic) NSString preLoginDomain;
@property (nonatomic) NSString uploadLogDomain;
- (id)timestampDomain;
- (id)uploadLogDomain;
- (id)initWithDefaultConfig;
- (id)preLoginDomain;
- (void)setPreLoginDomain:;
- (void)setTimestampDomain:;
- (void)setUploadLogDomain:;
- (void).cxx_destruct;
@end
