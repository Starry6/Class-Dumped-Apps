@interface FLEXTableView : UITableView
- (id)initWithFrame:style:;
- (void)registerCells:;
+ (id)flexDefaultTableView;
+ (id)groupedTableView;
+ (id)plainTableView;
+ (id)style:;
@end
