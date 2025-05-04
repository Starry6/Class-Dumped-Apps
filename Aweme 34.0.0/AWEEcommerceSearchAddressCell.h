@interface AWEEcommerceSearchAddressCell : UICollectionViewCell
@property (nonatomic) UIView bgView;
@property (nonatomic) DUXBaseImageView iconImgView;
@property (nonatomic) DUXBaseLabel addressLabel;
@property (nonatomic) UIButton changeAddressBtn;
@property (nonatomic) NSDictionary trackDict;
@property (nonatomic) AWEDoubleColumnSearchInstantLocationModel locationModel;
- (void)configWithModel:;
- (void)setTrackDict:;
- (id)trackDict;
- (id)iconImgView;
- (id)changeAddressBtn;
- (id)locationModel;
- (void)setLocationModel:;
- (void)changeBtnClicked;
- (void)updateAddressLabelWith:;
- (void)setIconImgView:;
- (void)setChangeAddressBtn:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setupViews;
- (id)addressLabel;
- (void)setAddressLabel:;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
