@interface AWELandscapeTitleViewTextSizeModel : NSObject
@property (nonatomic) double whiteSpaceWidth;
@property (nonatomic) double textWidth;
@property (nonatomic) double suffixTextWidth;
@property (nonatomic) double textRealWidth;
@property (nonatomic) double viewWidth;
- (void)updateWith:suffixText:;
- (double)realTextWidthWith:;
- (double)whiteSpaceWidth;
- (void)setWhiteSpaceWidth:;
- (double)textWidth;
- (void)setTextWidth:;
- (double)suffixTextWidth;
- (void)setSuffixTextWidth:;
- (double)textRealWidth;
- (void)setTextRealWidth:;
- (void)setViewWidth:;
- (id)initWithText:suffixText:textFont:suffixTextFont:;
- (id)init;
- (void).cxx_destruct;
- (double)viewWidth;
@end
