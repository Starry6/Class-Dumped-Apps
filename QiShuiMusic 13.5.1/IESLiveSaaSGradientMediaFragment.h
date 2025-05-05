@interface IESLiveSaaSGradientMediaFragment : IESLiveRoomComponent
@property (nonatomic) NSArray portraitLocations;
@property (nonatomic) NSArray landscapeLocations;
@property (nonatomic) IESLiveSaaSGradientView gradientView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)insertGriadentLayerOnMediaLayer;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentOrientationChanged:;
- (id)landscapeLocations;
- (id)portraitLocations;
- (void)setLandscapeLocations:;
- (void)setPortraitLocations:;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
