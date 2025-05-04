@interface AWELiveNetworkSpeedManager : NSObject
@property (nonatomic) NSMutableArray networkSpeedModelArray;
@property (nonatomic) NSMutableArray aggNetworkSpeedModelArray;
@property (nonatomic) q maxNetCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)provideVideoPlayerSpeedFeatureForLvvModel;
- (void)setMaxNetCount:;
- (long long)maxNetCount;
- (id)networkSpeedModelArray;
- (void)addAggPlayerNetSpeedModelWithDataLength:interval:netModel:;
- (id)aggNetworkSpeedModelArray;
- (void)addPlayerNetSpeedModelWithDataLength:interval:;
- (void)setNetworkSpeedModelArray:;
- (void)setAggNetworkSpeedModelArray:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
