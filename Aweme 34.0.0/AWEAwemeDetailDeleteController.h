@interface AWEAwemeDetailDeleteController : AWEAwemeNewDetailBaseController
@property (nonatomic) <AWEAwemeDetailHTSControllerProtocol> htsController;
@property (nonatomic) AWEAwemeDetailDeleteControllerMultipleDataSourceDispatcher multipleDataSourceDispatcher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (long long)_findFirstItemWithID:isDislike:;
- (void)addListenerForMultipleDataSourceDispatcher:;
- (void)onAwemeDeleteNotification:;
- (void)_onAwemeDeleted:isDislike:;
- (id)multipleDataSourceDispatcher;
- (void)onPushAwemeDislikeNotification:;
- (id)htsController;
- (BOOL)isDelAddDowngrading;
- (BOOL)needReloadForAllScene;
- (void)setHtsController:;
- (void)setMultipleDataSourceDispatcher:;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
@end
