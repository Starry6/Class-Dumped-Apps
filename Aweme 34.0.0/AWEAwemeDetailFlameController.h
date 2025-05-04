@interface AWEAwemeDetailFlameController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL needRetryFetchPendant;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__feedTableViewControllerWillPlayAweme:;
- (BOOL)enableFixFlamePendantShow;
- (id)aAWEFlameHTSAdapter;
- (id)aAWEMainModuleServiceDOUYINHTSAdaper;
- (BOOL)needRetryFetchPendant;
- (void)setNeedRetryFetchPendant:;
- (void)viewWillDisappear:;
- (id)init;
- (void)viewDidAppear:;
+ (Class)aAWEFlameHTSAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
@end
