@interface AWEAICreateEffectsNaviView : UIView
@property (nonatomic) UIView bar;
@property (nonatomic) UILabel label;
@property (nonatomic) UIButton generateCloseBtn;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)closeButtonDidClicked:;
- (id)generateCloseBtn;
- (void)layoutCreateKeywordsView;
- (void)setGenerateCloseBtn:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)setBar:;
- (id)bar;
@end
