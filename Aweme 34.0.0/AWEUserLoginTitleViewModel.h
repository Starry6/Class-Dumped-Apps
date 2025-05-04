@interface AWEUserLoginTitleViewModel : NSObject
@property (nonatomic) NSArray textArray;
@property (nonatomic) NSArray fontArray;
@property (nonatomic) NSArray fontColorArray;
@property (nonatomic) NSArray gapArray;
- (void)setTextArray:;
- (id)initWithTextArray:fontArray:;
- (void)setFontColorArray:;
- (void)setGapArray:;
- (id)fontColorArray;
- (id)gapArray;
- (id)fontArray;
- (void)setFontArray:;
- (void).cxx_destruct;
- (id)textArray;
@end
