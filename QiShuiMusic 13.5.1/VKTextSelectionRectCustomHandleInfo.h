@interface VKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo
@property (nonatomic) {CGPoint=dd} bottomLeft;
@property (nonatomic) {CGPoint=dd} topLeft;
@property (nonatomic) {CGPoint=dd} bottomRight;
@property (nonatomic) {CGPoint=dd} topRight;
- (id)topLeft;
- (id)topRight;
- (id)bottomLeft;
- (id)bottomRight;
- (void)setTopLeft:;
- (void)setTopRight:;
- (void)setBottomRight:;
- (void)setBottomLeft:;
@end
