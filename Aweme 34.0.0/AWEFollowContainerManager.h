@interface AWEFollowContainerManager : NSObject
@property (nonatomic) BOOL enableFollowContainerIndependentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getFollowContainerViewControllerWithInitialConfig:;
- (BOOL)enableFollowContainerIndependentVC;
- (BOOL)enableFollowContainer;
- (id)getHTSFollowViewController;
- (BOOL)shouldUseHTSFollowStyle;
- (Class)getFollowFeedGroupControllerFactoryClass;
- (id)aAWEConcernModuleServiceDOUYINHTSAdaper;
- (id)getFollowFeedTableViewController;
- (void)setEnableFollowContainerIndependentVC:;
- (id)init;
+ (Class)aAWEConcernModuleServiceDOUYINHTSAdaperClass;
+ (id)shareInstance;
@end
