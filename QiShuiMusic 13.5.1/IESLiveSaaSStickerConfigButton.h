@interface IESLiveSaaSStickerConfigButton : UICollectionViewCell
@property (nonatomic) UIButton lastStepButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) @? gobackBlock;
@property (nonatomic) @? confirmBlock;
- (void)setGobackBlock:;
- (void)bindAction;
- (id)confirmBlock;
- (id)gobackBlock;
- (id)lastStepButton;
- (void)setConfirmBlock:;
- (void)setLastStepButton:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)confirmButton;
- (void)setConfirmButton:;
+ (id)identifier;
@end
