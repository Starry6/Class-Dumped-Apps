@interface IESLiveSaaSFeedRecSingleCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSFeedRecSingleView recSingleView;
@property (nonatomic) IESLiveSaaSFeedCustomizedElementsModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)closeButtonView;
- (id)getEnterRoomParams;
- (BOOL)isPreviewPlaying;
- (void)playStream;
- (id)recSingleView;
- (void)setRecSingleView:;
- (id)model;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)updateData:;
- (void).cxx_destruct;
- (id)cellView;
- (double)cellHeight;
- (void)stopStream;
- (id)bottomContainerView;
@end
