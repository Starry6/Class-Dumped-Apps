@interface IESLiveTableViewSectionController : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) # cellClass;
- (id)cellForTableView:atIndex:;
- (double)cellHeightAtIndex:;
- (void)didSelectCell:atIndex:;
- (void)endDisplayCell:atIndex:;
- (id)footerForTableView:;
- (id)headerForTableView:;
- (void)willDisplyCell:atIndex:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (Class)cellClass;
- (double)heightForHeader;
- (double)heightForFooter;
- (void)setCellClass:;
@end
