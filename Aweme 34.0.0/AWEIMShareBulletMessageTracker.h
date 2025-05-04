@interface AWEIMShareBulletMessageTracker : NSObject
+ (BOOL)trackDidSelectShareUser:shareContext:inVC:;
+ (BOOL)trackDidShareToShareUserList:shareContext:additionalText:;
+ (BOOL)isBulletMessage:;
+ (void)__trackShareCard:shareContext:;
+ (void)__trackShareCardSendAction:shareContext:addtionalText:;
@end
