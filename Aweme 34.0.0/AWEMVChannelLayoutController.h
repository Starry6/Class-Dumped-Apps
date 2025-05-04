@interface AWEMVChannelLayoutController : AWEDCFeedBaseController
@property (nonatomic) NSMutableDictionary layoutDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerBeforeViewDidLoad;
- (BOOL)isShowingSkeleton;
- (id)mvPageContext;
- (id)createSectionViewModels:requestInfo:otherInfo:;
- (void)appendSectionViewModel:lastSectionViewModel:;
- (id)createSkeletonSectionViewModels;
- (long long)currentSmallCardCount;
- (id)layoutDic;
- (void)setupChildLayout;
- (id)getCurrentLayout;
- (void)trackSectionCreation:awemeModels:requestInfo:otherInfo:;
- (id)createLoadingBallSectionViewModels;
- (id)getCurrentLayoutType;
- (void)setLayoutDic:;
- (void).cxx_destruct;
+ (BOOL)isSkeletonCell:;
@end
