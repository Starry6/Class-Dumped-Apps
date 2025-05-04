@interface AWEDPlayerElementConfigs : NSObject
@property (nonatomic) AWEDPlayerInteractionViewConfig viewConfig;
- (id)viewConfig;
- (void)setViewConfig:;
- (id)initWithViewConfig:;
- (void)configTopContainer:pageContext:;
- (void)configVideoInfoContainer:pageContext:;
- (void)configMiddleContainer:pageContext:;
- (void)configBottomContainer:pageContext:;
- (void).cxx_destruct;
@end
