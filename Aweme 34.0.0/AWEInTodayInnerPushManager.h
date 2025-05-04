@interface AWEInTodayInnerPushManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pushSBCCouldHandleWithMsg:payload:businessType:;
- (void)showPush:;
- (void)reportMemoriesShowIfNeeded:;
- (id)init;
+ (id)sharedInstance;
@end
