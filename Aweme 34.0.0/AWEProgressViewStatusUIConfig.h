@interface AWEProgressViewStatusUIConfig : NSObject
@property (nonatomic) AWEProgressViewUIConfig progressViewNormalConfig;
@property (nonatomic) AWEProgressViewUIConfig progressViewActiveConfig;
@property (nonatomic) AWEProgressViewUIConfig progressViewDraggingConfig;
@property (nonatomic) AWEProgressViewUIConfig progressViewStableConfig;
@property (nonatomic) AWEProgressDecoratorViewStatusConfig decoratorViewConfig;
@property (nonatomic) BOOL shouldUseFakeSlider;
@property (nonatomic) AWEProgressFakeViewStatusUIConfig fakeViewStatusConfig;
- (id)fakeViewStatusConfig;
- (id)decoratorViewConfig;
- (id)progressViewNormalConfig;
- (void)setProgressViewNormalConfig:;
- (id)progressViewActiveConfig;
- (void)setProgressViewActiveConfig:;
- (id)progressViewDraggingConfig;
- (void)setProgressViewDraggingConfig:;
- (id)progressViewStableConfig;
- (void)setProgressViewStableConfig:;
- (void)setDecoratorViewConfig:;
- (BOOL)shouldUseFakeSlider;
- (void)setShouldUseFakeSlider:;
- (void)setFakeViewStatusConfig:;
- (void).cxx_destruct;
@end
