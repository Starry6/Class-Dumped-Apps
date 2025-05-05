@interface WKPDFFoundTextPosition : UITextPosition
@property (nonatomic) Q index;
- (unsigned long long)index;
- (void)setIndex:;
+ (id)textPositionWithIndex:;
@end
