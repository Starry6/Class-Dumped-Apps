@interface AWECommentPanelListSwiftImpl.CommentRiskTipsView : UIView
@property (nonatomic) @? closeBlock;
@property (nonatomic) @? showDetailBlock;
@property (nonatomic) NSString contentStr;
@property (nonatomic) NSString accessibilityLabel;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)showDetailBlock;
- (void)setShowDetailBlock:;
- (id)contentStr;
- (void)setContentStr:;
- (double)heightForBottomTipsWithContent:maxWidth:;
- (void)closeButtonClick:;
- (void)showDetail:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void)setAccessibilityLabel:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
@end
