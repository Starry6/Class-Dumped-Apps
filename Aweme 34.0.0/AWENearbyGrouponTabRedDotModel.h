@interface AWENearbyGrouponTabRedDotModel : AWEBaseApiModel
@property (nonatomic) AWENearbyGrouponCommonFrequencyData frequencyData;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) BOOL hasRedDotShow;
- (id)trackParams;
- (void)setTrackParams:;
- (id)frequencyData;
- (void)setFrequencyData:;
- (void)setHasRedDotShow:;
- (BOOL)hasRedDotShow;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
