@interface AWEOpenPlatformAuthRouter : NSObject
+ (unsigned long long)flowTypeFromSource:;
+ (void)tryJumpSchemaWithAuthInfo:withScene:isShowedUI:;
+ (void)handleTransitionInfo:isExternalWebAuth:;
+ (void)handleIMMessageAuthTransitionInfo:;
@end
