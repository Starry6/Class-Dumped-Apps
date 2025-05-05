@interface DJTableViewVMCell : UITableViewCell
@property (nonatomic) NSArray separatorLineViews;
@property (nonatomic) UITableView parentTableView;
@property (nonatomic) DJTableViewVMRow rowVM;
@property (nonatomic) BOOL loaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parentTableView;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (void)refreshCurrentSeparatorLine;
- (id)rowVM;
- (id)separatorLineViews;
- (void)setParentTableView:;
- (void)setRowVM:;
- (void)setSeparatorLineViews:;
- (void)layoutSubviews;
- (BOOL)loaded;
- (void).cxx_destruct;
- (void)setLoaded:;
+ (double)heightWithRow:tableViewVM:;
@end
