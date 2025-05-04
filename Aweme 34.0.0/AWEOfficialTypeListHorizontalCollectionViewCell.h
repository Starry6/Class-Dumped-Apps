@interface AWEOfficialTypeListHorizontalCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel typeNameLabel;
@property (nonatomic) UIView<IESIMBadgeProtocol> redBadge;
@property (nonatomic) AWEIMNoticeTypeStructModel typeModel;
- (id)redBadge;
- (void)setRedBadge:;
- (void)configWithNoticeTypeModel:;
- (id)typeNameLabel;
- (void)setTypeNameLabel:;
- (void)setTypeModel:;
- (id)typeModel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSelected:;
+ (BOOL)fixTypeListAndFilterPanelAccessibility;
@end
