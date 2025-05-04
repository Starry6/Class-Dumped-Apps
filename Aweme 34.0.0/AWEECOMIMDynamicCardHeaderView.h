@interface AWEECOMIMDynamicCardHeaderView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel stateLabel;
- (void)updateWithElememtModel:;
- (double)heightWithElementModel:;
- (void)updateHeaderViewWithLeftInfoModel:statusModel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setStateLabel:;
- (id)stateLabel;
+ (id)sizeWithElementModel:maxSize:;
+ (double)heightWithElementModel:maxSize:;
+ (double)headerViewHeightWithLeftInfoModel:statusModel:;
@end
