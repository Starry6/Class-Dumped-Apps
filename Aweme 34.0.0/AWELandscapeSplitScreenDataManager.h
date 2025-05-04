@interface AWELandscapeSplitScreenDataManager : NSObject
@property (nonatomic) NSMutableArray postCacheDataController;
@property (nonatomic) NSMutableArray detailCacheDataController;
@property (nonatomic) AWELandscapePageContext pageContext;
- (id)initWithPageContext:;
- (id)findPostDataControllerFromCacheWithModel:currentUserModel:;
- (void)trackExitSplitScreenFailWithReason:isLoading:splitScreenMode:;
- (id)postCacheDataController;
- (void)removePostCacheDataControllerIfNeededWithUserID:;
- (id)detailCacheDataController;
- (void)removeDetailDataControllerIfNeeded;
- (id)findDetailDataControllerFromCacheWithModel:;
- (void)setPostCacheDataController:;
- (void)setDetailCacheDataController:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
