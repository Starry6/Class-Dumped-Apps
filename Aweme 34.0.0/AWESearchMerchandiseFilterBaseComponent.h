@interface AWESearchMerchandiseFilterBaseComponent : UICollectionViewCell
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel model;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager manager;
- (id)businessInfo;
- (void)setModel:;
- (void)setIsSelected:;
- (void)setManager:;
- (BOOL)isSelected;
- (id)manager;
- (id)model;
- (void).cxx_destruct;
@end
