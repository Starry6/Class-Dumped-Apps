@interface LNAutoShortcutsProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (void)autoShortcutsForBundleIdentifier:localeIdentifier:completion:;
- (void)retrieveActionForLocalizedPhrase:completion:;
- (id)autoShortcutsForLocaleIdentifier:error:;
- (id)autoShortcutsForApplicationRecord:localeIdentifier:;
- (void).cxx_destruct;
- (void)autoShortcutsForLocaleIdentifier:completion:;
+ (id)sharedInstance;
@end
