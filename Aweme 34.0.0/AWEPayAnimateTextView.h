@interface AWEPayAnimateTextView : UIView
@property (nonatomic) NSArray charList;
@property (nonatomic) NSArray singleLabelList;
@property (nonatomic) double width;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) double textAnimationTime;
- (void)setTextAnimationTime:;
- (void)p_generateLabelList;
- (id)p_generateStackView;
- (id)p_generateLabelWith:;
- (void)refreshWithList:;
- (double)textAnimationTime;
- (id)charList;
- (void)setCharList:;
- (id)singleLabelList;
- (void)setSingleLabelList:;
- (void)setWidth:;
- (void)setTextColor:;
- (double)width;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (id)textColor;
@end
