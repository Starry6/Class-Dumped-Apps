@interface IPWatchLocaleController : NSObject
@property (nonatomic) NPSDomainAccessor gizmoGlobalDomain;
@property (nonatomic) NPSManager syncManager;
@property (nonatomic) NSArray systemLanguages;
- (void)setLocale:;
- (id)init;
- (void)setLanguages:;
- (id)syncManager;
- (BOOL)isMirroringEnabled;
- (id)preferredLanguages;
- (void).cxx_destruct;
- (void)setSyncManager:;
- (id)systemLanguages;
- (void)setSystemLanguages:;
- (void)updateLocale:;
- (id)deviceLanguage;
- (id)initWithSystemLanguages:;
- (void)postLocaleChangedNotification;
- (void)resetTimeFormat;
- (void)initializeMirrorSettings;
- (void)mirrorLanguagesAndLocaleToWatch;
- (id)gizmoGlobalDomain;
- (void)setGizmoGlobalDomain:;
@end
