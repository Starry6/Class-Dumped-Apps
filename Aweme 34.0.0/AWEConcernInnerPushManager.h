@interface AWEConcernInnerPushManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showUpdatePush:;
- (BOOL)pushSBCCouldHandleWithMsg:payload:businessType:;
- (id)init;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
