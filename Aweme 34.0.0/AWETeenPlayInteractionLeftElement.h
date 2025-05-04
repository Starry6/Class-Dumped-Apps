@interface AWETeenPlayInteractionLeftElement : AWETeenPlayInteractionBaseElement
@property (nonatomic) double leftContainerWidth;
@property (nonatomic) double dynamicWidthMultiply;
@property (nonatomic) double dynamicWidthOffset;
- (void)dynamicWidthRemakeLayout;
- (double)dynamicWidthOffset;
- (double)dynamicWidthMultiply;
- (double)leftContainerWidth;
- (void)setLeftContainerWidth:;
- (void)setDynamicWidthMultiply:;
- (void)setDynamicWidthOffset:;
- (void)viewDidLoad;
- (unsigned long long)elementPosition;
@end
