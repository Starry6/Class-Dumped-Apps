@interface JULanguageAwareTextStorage : NSObject
@property (nonatomic) NSTextStorage textStorage;
- (id)textStorage;
- (id)init;
- (id)initWithTextStorage:;
- (void).cxx_destruct;
- (void)setTextStorage:;
- (void)textStorage:willProcessEditing:range:changeInLength:;
- (void)textStorage:didProcessEditing:range:changeInLength:;
- (id)writingDirectionsQuantities;
- (long long)writingDirectionOfLine:maximumLinesShown:withWidth:lineBreakMode:cacheLayoutInfo:;
@end
