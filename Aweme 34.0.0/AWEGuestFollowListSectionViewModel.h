@interface AWEGuestFollowListSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSString headerTitle;
@property (nonatomic) BOOL isFollowRequestOnAir;
@property (nonatomic) @? loadMoreBlock;
- (BOOL)isFollowRequestOnAir;
- (void)setLoadMoreBlock:;
- (id)loadMoreBlock;
- (void)requestFollowWithUser:;
- (void)enterUserProfileWithModel:;
- (void)prefetchIfNeededWithIndex:;
- (BOOL)isInvalidAccount:;
- (void)setIsFollowRequestOnAir:;
- (id)headerTitle;
- (void)setHeaderTitle:;
- (void).cxx_destruct;
+ (id)viewModelWithModelsArray:loadMoreBlock:;
@end
