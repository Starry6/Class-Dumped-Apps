@interface AWETeenGeneralActionPanelCell : UICollectionViewCell
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSArray actionArray;
- (id)awemeModel;
- (void)p_setupUI;
- (void)setAwemeModel:;
- (void)setActionArray:;
- (id)actionArray;
- (void)configWithModel:extra:;
- (void)playLikeAnimationWithModel:status:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)cellSize;
@end
