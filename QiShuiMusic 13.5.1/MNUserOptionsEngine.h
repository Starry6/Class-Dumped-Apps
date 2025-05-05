@interface MNUserOptionsEngine : NSObject
@property (nonatomic) NSString currentVoiceLanguage;
@property (nonatomic) MNUserOptions options;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)update:;
- (id)localizedStringForKey:;
- (id)options;
- (void).cxx_destruct;
- (void)updateNavigationSessionLanguage:;
- (id)currentVoiceLanguage;
+ (id)sharedInstance;
@end
