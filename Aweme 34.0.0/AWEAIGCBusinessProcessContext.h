@interface AWEAIGCBusinessProcessContext : NSObject
@property (nonatomic) NSMutableArray taskList;
@property (nonatomic) AWEResourceUploadParametersResponseModel authorResponseModel;
@property (nonatomic) NSMutableArray suspendTaskList;
@property (nonatomic) BOOL authorRequestRunning;
- (id)authorResponseModel;
- (void)setAuthorResponseModel:;
- (void)loadImageUploadAuthorInfoWithInstance:;
- (Class)matchTaskClassWithType:;
- (BOOL)checkAuthorExpiration;
- (id)suspendTaskList;
- (BOOL)authorRequestRunning;
- (void)setAuthorRequestRunning:;
- (void)setSuspendTaskList:;
- (void).cxx_destruct;
- (void)setTaskList:;
- (id)taskList;
+ (id)authModel;
+ (void)startUploadImages:extra:uploaderHolder:result:;
+ (void)refreshAuthorInfoWithCompletion:;
+ (void)removeBusinessTaskWith:;
+ (id)createBusinessTaskWithRequestModel:injectClassHandler:;
+ (void)refreshAuthorInfo;
+ (void)preloadPrepareEvent;
+ (id)defaultManager;
@end
