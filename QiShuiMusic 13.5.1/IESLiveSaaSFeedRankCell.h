@interface IESLiveSaaSFeedRankCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSFeedRankView cellView;
@property (nonatomic) IESLiveSaaSFeedCustomizedElementsModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getEnterRoomParams;
- (void)setCellView:;
- (id)model;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)updateData:;
- (void).cxx_destruct;
- (id)cellView;
@end
