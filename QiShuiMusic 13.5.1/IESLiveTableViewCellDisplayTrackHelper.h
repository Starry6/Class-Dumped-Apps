@interface IESLiveTableViewCellDisplayTrackHelper : NSObject
@property (nonatomic) NSMutableDictionary trackRecord;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleArea;
@property (nonatomic) UITableView tableView;
@property (nonatomic) <IESLiveTableViewCellDisplayTrackHelperDelegate> delegate;
- (void)clearTrackRecordWithIdentifier:;
- (void)setVisibleArea:;
- (void)setTrackRecord:;
- (void)clearTrackRecord;
- (void)clearTrackRecordWithIdentifier:sectionId:;
- (id)indexPathToString:;
- (id)initWithTableView:delegate:;
- (id)initWithTableView:delegate:visibleArea:;
- (void)trackAllDisplayedCell;
- (void)trackAllDisplayedCellWithIdentifier:;
- (void)trackDisplayedCell:identifier:;
- (id)trackRecord;
- (id)visibleArea;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)tableView;
@end
