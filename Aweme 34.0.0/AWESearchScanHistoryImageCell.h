@interface AWESearchScanHistoryImageCell : UICollectionViewCell
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UIImageView historyImageView;
@property (nonatomic) BOOL showDeleteButton;
@property (nonatomic) NSString scanID;
@property (nonatomic) AWESearchScanHistoryModel model;
@property (nonatomic) <AWESearchScanHistoryCellDelegate> delegate;
- (void)configUI;
- (void)updateCellWithModel:;
- (id)scanID;
- (void)setShowDeleteButton:;
- (id)historyImageView;
- (void)setScanID:;
- (BOOL)showDeleteButton;
- (void)setHistoryImageView:;
- (void)setModel:;
- (void)setDeleteButton:;
- (id)delegate;
- (id)initWithFrame:;
- (id)model;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)deleteButtonTapped;
@end
