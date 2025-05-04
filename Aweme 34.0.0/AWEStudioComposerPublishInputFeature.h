@interface AWEStudioComposerPublishInputFeature : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) BOOL enableTitle;
@property (nonatomic) q actionOptions;
@property (nonatomic) BOOL enableBottomLine;
@property (nonatomic) NSString placeholderTitle;
- (long long)actionOptions;
- (BOOL)enableTitle;
- (void)setEnableTitle:;
- (void)setActionOptions:;
- (void)setEnableBottomLine:;
- (BOOL)enableBottomLine;
- (void)setPlaceholderTitle:;
- (id)initWithMode:;
- (void).cxx_destruct;
- (id)placeholderTitle;
@end
