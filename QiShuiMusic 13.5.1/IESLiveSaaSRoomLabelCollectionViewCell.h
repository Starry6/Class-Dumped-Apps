@interface IESLiveSaaSRoomLabelCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel label;
@property (nonatomic) NSString labelString;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) IESLiveSaaSAction deleteAction;
- (void)didTouchDeleteAction:;
- (id)intrinsicContentSize;
- (void)setIndexPath:;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)deleteAction;
- (id)indexPath;
- (id)labelString;
- (id)closeButton;
- (void)setCloseButton:;
- (void)setDeleteAction:;
- (void)setLabelString:;
@end
