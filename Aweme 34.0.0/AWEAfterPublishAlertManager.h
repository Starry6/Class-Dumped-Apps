@interface AWEAfterPublishAlertManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)dealloc;
+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;
@end
