@interface IESECLiveCombinationBlockView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) <IESECLiveConfigViewDelegate> delegate;
@property (nonatomic) IESECLiveCombinationBlockElementModel combinationBlockModel;
- (void)clickAction;
- (id)combinationBlockModel;
- (id)initWithDelegate:contentView:model:;
- (void)p_didShow;
- (void)setCombinationBlockModel:;
- (id)contentView;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
- (void)setBgImageView:;
- (id)bgImageView;
@end
