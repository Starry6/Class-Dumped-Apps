@interface AWEConcernSkylightUpdateCell : UICollectionViewCell
@property (nonatomic) AWESkylightCellEntranceView commonEntranceView;
@property (nonatomic) AWESkylightCellEntranceConfig entranceConfig;
@property (nonatomic) AWEConcernSkylightCellModel cellModel;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)configWithCellModel:;
- (void)followListUnreadCacheDidChangeWithUserID:deleteItemIDs:;
- (void)hideRedDot;
- (void)setCommonEntranceView:;
- (id)commonEntranceView;
- (id)entranceConfig;
- (void)updateUnreadNumTextConfig;
- (void)setEntranceConfig:;
- (void)dealloc;
- (id)initWithFrame:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setupUI;
- (id)cellModel;
+ (id)reuseIdentifier;
@end
