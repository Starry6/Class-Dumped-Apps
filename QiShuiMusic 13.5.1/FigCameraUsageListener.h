@interface FigCameraUsageListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:;
- (id)initWithChangeHandler:;
@end
