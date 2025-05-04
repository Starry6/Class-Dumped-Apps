@interface AWEPlayInteractionLeftElement : AWEPlayInteractionBaseElement
@property (nonatomic) double leftContainerWidth;
@property (nonatomic) BOOL responsiveLayout;
@property (nonatomic) double dynamicWidthMultiply;
@property (nonatomic) double dynamicWidthOffset;
- (void)dynamicWidthRemakeLayout;
- (double)dynamicWidthOffset;
- (double)dynamicWidthMultiply;
- (double)leftContainerWidth;
- (void)performPlayInteractionLeftElementDynamicLayout:;
- (BOOL)responsiveLayout;
- (void)setLeftContainerWidth:;
- (double)leftContainerWidthBeforeLayoutFinish;
- (void)setResponsiveLayout:;
- (void)setDynamicWidthMultiply:;
- (void)setDynamicWidthOffset:;
- (void)viewDidLoad;
- (unsigned long long)elementPosition;
@end
