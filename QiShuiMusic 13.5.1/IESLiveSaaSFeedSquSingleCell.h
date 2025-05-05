@interface IESLiveSaaSFeedSquSingleCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSFeedOperationModel opreationModel;
@property (nonatomic) IESLiveSaaSFeedSquSingleView cellView;
@property (nonatomic) IESLiveSaaSFeedCustomizedElementsModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCellOperationModel;
- (id)getEnterRoomParams;
- (BOOL)isPreviewPlaying;
- (id)opreationModel;
- (void)playStream;
- (void)setCellView:;
- (void)setOpreationModel:;
- (id)model;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)updateData:;
- (void).cxx_destruct;
- (id)cellView;
- (double)cellHeight;
- (void)stopStream;
@end
