@interface UITableViewSection : NSObject
@property (nonatomic) NSString headerTitle;
@property (nonatomic) UIView headerView;
@property (nonatomic) NSString footerTitle;
@property (nonatomic) UIView footerView;
@property (nonatomic) NSArray rows;
- (void)setFooterView:;
- (void)setHeaderView:;
- (id)headerTitle;
- (void)setHeaderTitle:;
- (void)setRows:;
- (id)rows;
- (id)initWithCoder:;
- (id)headerView;
- (id)footerView;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)footerTitle;
- (void)setFooterTitle:;
+ (id)sectionWithRows:;
@end
