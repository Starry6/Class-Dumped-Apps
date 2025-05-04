@interface AWESocialPromotionInnerPushManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showGeneralButtonEcommercePostActivityInnerPush:;
- (BOOL)pushSBCCouldHandleWithMsg:payload:businessType:;
- (BOOL)couldDisplayNotificationWithPayload:;
- (void)p_showPush:;
- (BOOL)p_checkSceneValid;
- (id)init;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
@end
