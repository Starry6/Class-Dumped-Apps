@interface AWEPadFollowListContainerAdapter : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastContainerFrame;
@property (nonatomic) NSMutableDictionary reloadViewControllerFlags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadSelectedViewControllerIfNeed:index:;
- (id)lastContainerFrame;
- (void)markAllViewControllerNeedReload;
- (void)setLastContainerFrame:;
- (id)reloadViewControllerFlags;
- (void)setReloadViewControllerFlags:;
- (void).cxx_destruct;
- (void)dynamicLayout;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (BOOL)Enable;
@end
