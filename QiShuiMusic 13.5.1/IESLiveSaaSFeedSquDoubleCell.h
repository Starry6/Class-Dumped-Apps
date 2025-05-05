@interface IESLiveSaaSFeedSquDoubleCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSFeedSquDoubleView squDoubleView;
@property (nonatomic) IESLiveSaaSFeedOperationModel operationModel;
@property (nonatomic) IESLiveSaaSFeedCustomizedElementsModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCellOperationModel;
- (id)getEnterRoomParams;
- (id)operationModel;
- (void)setOperationModel:;
- (void)setSquDoubleView:;
- (id)squDoubleView;
- (id)model;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)updateData:;
- (void).cxx_destruct;
@end
