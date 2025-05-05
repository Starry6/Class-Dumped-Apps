@interface BDUGLuckyDogResourceSchemaManager : NSObject
@property (nonatomic) BDUGLuckyDogResourceSchemaPopupLockGuard popupQueueLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__doResourceActionWithURLString:resourceParams:completion:;
- (void)__handleResourceActionWithURLString:params:completion:;
- (void)__startup;
- (BOOL)canHandleUrl:;
- (id)handleUrl:;
- (BOOL)isMustBeAwakened;
- (id)popupQueueLock;
- (void)setPopupQueueLock:;
- (void).cxx_destruct;
+ (long long)intercepterType;
+ (void)preStartupUnionSchemaModule;
+ (id)sharedInstance;
@end
