@interface MPAVRoutingViewControllerItems : NSObject
@property (nonatomic) NSDictionary routeGrouping;
@property (nonatomic) NSArray localDevices;
@property (nonatomic) NSArray headphones;
@property (nonatomic) NSArray speakersAndTVs;
- (void)setRouteGrouping:;
- (id)routeGrouping;
- (void)setSpeakersAndTVs:;
- (id)speakersAndTVs;
- (void).cxx_destruct;
- (id)localDevices;
- (void)setLocalDevices:;
- (id)headphones;
- (void)setHeadphones:;
@end
