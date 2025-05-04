@interface AWEPLVAuoPlayCellController : AWEPadListReusableViewBaseController
@property (nonatomic) BOOL videoPlayFinished;
@property (nonatomic) AWEPLVAutoPlayTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)diffIdentifier;
- (id)commonTrackParams;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (long long)breakPointCardColumnNum;
- (BOOL)videoPlayFinished;
- (void)setVideoPlayFinished:;
- (void)viewDidFocused;
- (void)viewDidUnFocused;
- (Class)viewClass;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
@end
