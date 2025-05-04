@interface AWEIMPitayaActivityUtility : NSObject
- (id)activityDisabledToastDoc;
- (BOOL)shouldDisableActivity:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
