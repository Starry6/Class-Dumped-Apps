@interface AWEPublishAnchorServiceImpl : HTSService
@property (nonatomic) <ACCPublishAnchorUtilsService> utilsService;
@property (nonatomic) <ACCPublishAnchorDataService> dataService;
@property (nonatomic) <ACCPublishAnchorPriorityService> priorityService;
@property (nonatomic) <ACCPublishAnchorCacheService> cacheService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataService;
- (void)setDataService:;
- (id)cacheService;
- (void)setCacheService:;
- (id)utilsService;
- (id)priorityService;
- (void)setUtilsService:;
- (void)setPriorityService:;
- (id)init;
- (void).cxx_destruct;
@end
