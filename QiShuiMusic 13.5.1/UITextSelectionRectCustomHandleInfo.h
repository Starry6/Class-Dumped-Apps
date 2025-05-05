@interface UITextSelectionRectCustomHandleInfo : NSObject
@property (nonatomic) {CGPoint=dd} bottomLeft;
@property (nonatomic) {CGPoint=dd} topLeft;
@property (nonatomic) {CGPoint=dd} bottomRight;
@property (nonatomic) {CGPoint=dd} topRight;
- (unsigned long long)hash;
- (id)topLeft;
- (id)topRight;
- (id)bottomLeft;
- (id)description;
- (id)bottomRight;
- (BOOL)isEqual:;
@end
