@interface AWELifeFeedsHighLightPlugin : AWELifeFeedsBasePlugin
@property (nonatomic) BOOL highLightShowing;
- (id)fetchComponentHighLightFromComponentView:;
- (BOOL)highLightShowing;
- (void)setHighLightShowing:;
- (void)highLightComponent:config:;
- (void)highLightComponentsIfNeed;
@end
