@interface IESLiveListViewCell : UITableViewCell
@property (nonatomic) <IESLiveItemProtocol> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderWithItem:;
- (void)endDisplayCell;
- (id)item;
- (void)prepareForReuse;
- (void)setItem:;
- (void).cxx_destruct;
+ (double)heightForItem:;
+ (void)registerCellForTableView:;
+ (id)identifier;
@end
