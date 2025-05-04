@interface AWEPOIAlbumDoubleColumnPhoto : UITableViewCell
@property (nonatomic) AWEPOIAlbumSinglePhoto leftItem;
@property (nonatomic) AWEPOIAlbumSinglePhoto rightItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithLeftPhoto:rightPhoto:selectedStatus:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)leftItem;
- (id)rightItem;
- (void)setLeftItem:;
- (void)setRightItem:;
@end
