@interface AWEVideoRelatedNoMoreVideoSectionController : AWEBaseListSectionController
@property (nonatomic) UILabel noMoreVideoLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView backImageView;
@property (nonatomic) AWEFeedCollectionContainerContext context;
@property (nonatomic) BOOL hasTrackForShown;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)cellIdentifierForModel:index:;
- (void)setBackImageView:;
- (id)backImageView;
- (void)clickBottomView;
- (void)updateUIWithView:;
- (id)noMoreVideoLabel;
- (void)setNoMoreVideoLabel:;
- (BOOL)hasTrackForShown;
- (void)setHasTrackForShown:;
- (id)containerView;
- (Class)cellClass;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)context;
@end
