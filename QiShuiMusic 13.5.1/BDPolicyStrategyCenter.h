@interface BDPolicyStrategyCenter : NSObject
@property (nonatomic) BDCertLimitBinder limitBinder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)limitBinder;
- (void)recordCertInThreadContext:;
- (id)validateAndTranslateCert:context:;
- (id)validatePolicy:context:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
