@interface AWEIMHalfScreenContactTableViewHeader : UIView
@property (nonatomic) AWEIMHalfScreenSearchView searchView;
@property (nonatomic) AWEIMHalfScreenContactTableViewHeaderCell currentGroupCell;
@property (nonatomic) AWEIMHalfScreenContactTableViewHeaderCell createGroupCell;
@property (nonatomic) AWEIMHalfScreenContactTableViewHeaderCell manageFansGroupCell;
@property (nonatomic) q cellNumber;
- (id)createGroupCell;
- (long long)cellNumber;
- (id)currentGroupCell;
- (id)manageFansGroupCell;
- (void)p_setupUI;
- (void)setCellNumber:;
- (void)setCreateGroupCell:;
- (void)setCurrentGroupCell:;
- (void)setManageFansGroupCell:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)searchView;
- (void)setSearchView:;
@end
