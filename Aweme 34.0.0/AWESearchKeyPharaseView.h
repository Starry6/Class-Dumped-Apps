@interface AWESearchKeyPharaseView : UIView
@property (nonatomic) UIButton keyPhraseButton;
@property (nonatomic) UIImageView sharpCorner;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasclicked;
@property (nonatomic) @? clickButtonBlock;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)clickButtonBlock;
- (void)setClickButtonBlock:;
- (void)clickKeyPharaseButton;
- (void)finishJumpKeyPharase;
- (id)keyPhraseButton;
- (id)sharpCorner;
- (BOOL)hasclicked;
- (void)setHasclicked:;
- (void)setKeyPhraseButton:;
- (void)setSharpCorner:;
- (id)init;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
- (double)getWidth;
@end
