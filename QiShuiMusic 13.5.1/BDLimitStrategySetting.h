@interface BDLimitStrategySetting : NSObject
@property (nonatomic) BDCertLimitBinder limitBinder;
- (void)initCertLimits:;
- (void)setLimitBinder:;
- (void)initAuthMap:;
- (void)initDynamicLimits:;
- (id)limitBinder;
- (void)updateCertLimits:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
