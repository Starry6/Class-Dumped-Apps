@interface CPTextLineMaker : NSObject
- (void)dealloc;
- (id)textLines;
- (void)splitByGraphic:with:;
- (void)zOrderSplitLines:;
- (unsigned int)makeTextLines:;
@end
