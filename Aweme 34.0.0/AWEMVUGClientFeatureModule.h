@interface AWEMVUGClientFeatureModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppHandleNotification;
- (void)onHandleAppShortcutAction;
@end
