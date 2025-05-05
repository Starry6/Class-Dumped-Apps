@interface IESLiveSaaSStreamPlayerDynamicLayoutCalculator : NSObject
@property (nonatomic) IESLiveSaaSStreamPlayerLayoutDynamicConfig config;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} playerFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerFrame;
@property (nonatomic) {CGSize=dd} mediaSize;
- (double)bottomYPosition;
- (void)setPlayerFrame:;
- (double)activityDefaultTopSpacing;
- (double)calculateTopSpacing;
- (double)defaultPreviewBottomSpacing;
- (id)getMediaContainerFrame;
- (double)getMediaWidthHeightRatio;
- (double)mixWidthHeightRatio;
- (id)playerFrame;
- (double)standardMargin;
- (double)streamHeightRatio;
- (double)streamWidthRatio;
- (double)toolbarDefaultBottomSpacing;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)process;
- (void).cxx_destruct;
- (id)config;
- (id)containerFrame;
- (void)setContainerFrame:;
- (id)mediaSize;
- (void)setMediaSize:;
@end
