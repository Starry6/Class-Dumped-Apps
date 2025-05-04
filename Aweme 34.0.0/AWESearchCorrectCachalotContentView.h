@interface AWESearchCorrectCachalotContentView : UIView
@property (nonatomic) AWESearchCorrectModel model;
@property (nonatomic) YYLabel keywordLabel;
@property (nonatomic) @? tapBlock;
@property (nonatomic) Q theme;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)configureUI;
- (void)updateWithCorrectModel:;
- (unsigned long long)theme;
- (void)setModel:;
- (void)setTheme:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)keywordLabel;
- (void)setKeywordLabel:;
- (double)maxLabelWidth;
+ (double)heightForCorrectModel:width:;
+ (id)p_generalWeakCorrectWithCorrectModel:theme:tapBlock:;
+ (id)p_generalStrongCorrectWithCorrectModel:theme:tapBlock:;
+ (id)p_generalKeywordLabel;
@end
