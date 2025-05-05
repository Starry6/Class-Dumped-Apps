@interface FSUserFontServicesManager : NSObject
+ (void)GSFontUnregisterPersistentURLs:forProfileFonts:withReply:;
+ (void)GSFontEnableOrDisablePersistentURLs:forProfileFonts:enabled:suspend:withReply:;
+ (void)GSFontRegisterPersistentURLs:enabled:forProfileFonts:withReply:;
+ (id)_UserFontServicesConnection;
@end
