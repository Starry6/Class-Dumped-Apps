@interface IESECFeedContentCardCell : UICollectionViewCell
@property (nonatomic) IESECLLView llView;
@property (nonatomic) <IESECFeedContentCardCellModel><IESECFeedContentCardCellDelegate> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isDanmakuEnable;
- (id)playerContainer;
- (void)bindViewModel:;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (id)llView;
- (id)playItem;
- (void)setLlView:;
- (id)viewModel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (id)cellBuilderWithModel:;
+ (double)heightForCellWithModel:;
@end
