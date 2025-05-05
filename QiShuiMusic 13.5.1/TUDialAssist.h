@interface TUDialAssist : NSObject
@property (nonatomic) NSInteger dialAssistUserSettingsChangedToken;
- (id)init;
- (void)dealloc;
- (int)dialAssistUserSettingsChangedToken;
+ (id)sharedInstance;
@end
