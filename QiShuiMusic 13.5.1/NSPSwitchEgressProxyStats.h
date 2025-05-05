@interface NSPSwitchEgressProxyStats : NSPProxyAnalytics
@property (nonatomic) NSString tierType;
@property (nonatomic) NSString vendor;
@property (nonatomic) BOOL primaryProxy;
@property (nonatomic) BOOL fallbackProxy;
- (void)setTierType:;
- (id)eventName;
- (void).cxx_destruct;
- (void)setVendor:;
- (id)analyticsDict;
- (id)tierType;
- (id)vendor;
- (BOOL)primaryProxy;
- (void)setPrimaryProxy:;
- (BOOL)fallbackProxy;
- (void)setFallbackProxy:;
@end
