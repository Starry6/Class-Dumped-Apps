@interface AWESkylightUnreadCell : UICollectionViewCell
@property (nonatomic) AWESkylightCellEntranceView commonEntranceView;
@property (nonatomic) AWEConcernSkylightCellModel cellModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)configWithCellModel:;
- (void)showRedDotAnimationWithComplition:;
- (void)hideRedDot;
- (void)setCommonEntranceView:;
- (id)commonEntranceView;
- (BOOL)canRemoveUnreadLogo;
- (double)tagLabelFontSize;
- (void)configUIWithModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)cellModel;
+ (double)topAvatarCenterXOffset;
+ (id)reuseIdentifier;
@end
