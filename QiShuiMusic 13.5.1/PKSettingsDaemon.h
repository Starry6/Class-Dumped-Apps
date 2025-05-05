@interface PKSettingsDaemon : NSObject
+ (void)setPrefersPencilOnlyDrawing:;
+ (void)setCurrentScribbleLanguageIdentifiers:;
+ (id)daemonQueue;
+ (void)openPencilPreferences;
@end
