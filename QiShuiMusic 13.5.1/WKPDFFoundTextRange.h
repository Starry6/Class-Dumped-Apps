@interface WKPDFFoundTextRange : UITextRange
@property (nonatomic) Q index;
- (id)end;
- (BOOL)isEmpty;
- (id)start;
- (unsigned long long)index;
- (void)setIndex:;
+ (id)foundTextRangeWithIndex:;
@end
