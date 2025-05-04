@interface AWETrafficExcitationUtils : NSObject
@property (nonatomic) q lastState;
@property (nonatomic) BOOL trafficExcitationStatus;
@property (nonatomic) Q targetISPType;
@property (nonatomic) Q targetNetworkType;
- (void)onNetworkChanged:;
- (unsigned long long)carrierType;
- (unsigned long long)currentCarrierNetworkType;
- (unsigned long long)targetNetworkType;
- (unsigned long long)targetISPType;
- (BOOL)trafficExcitationStatus;
- (void)setTrafficExcitationStatus:;
- (void)trafficExcitation;
- (void)setTargetISPType:;
- (void)setTargetNetworkType:;
- (id)init;
- (long long)lastState;
- (void)setLastState:;
+ (id)sharedInstance;
@end
