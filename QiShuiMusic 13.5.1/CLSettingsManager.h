@interface CLSettingsManager : CLSettingsManagerInternal
@property (nonatomic) @ notificationObserver;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refresh;
- (id)init;
- (void)endService;
- (void)beginService;
- (id)notificationObserver;
- (void)setNotificationObserver:;
- (id)syncgetSetValue:forKey:withoutNotifying:;
@end
