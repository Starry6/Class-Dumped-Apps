@interface AWEHPLeftSlideToUserGuideViewConfig : NSObject
@property (nonatomic) double width;
@property (nonatomic) BOOL textIgnoreBlank;
@property (nonatomic) double textBottomPosition;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} initialFrame;
@property (nonatomic) {CGSize=dd} containerSize;
@property (nonatomic) {CGSize=dd} originContainerSize;
@property (nonatomic) double rightContainerHeight;
- (BOOL)textIgnoreBlank;
- (void)setTextIgnoreBlank:;
- (double)textBottomPosition;
- (void)setTextBottomPosition:;
- (id)originContainerSize;
- (void)setOriginContainerSize:;
- (double)rightContainerHeight;
- (void)setRightContainerHeight:;
- (void)setWidth:;
- (id)containerSize;
- (void)setContainerSize:;
- (double)width;
- (id)initialFrame;
- (void)setInitialFrame:;
@end
