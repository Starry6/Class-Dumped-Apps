@interface BSCFBundle : NSObject
- (id)executablePath;
- (id)bundlePath;
- (id)infoDictionary;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithURL:;
- (id)localizedStringForKey:value:table:;
- (id)pathForResource:ofType:;
- (id)cfBundle;
- (id)localizedInfoDictionary;
- (id)pathForResource:ofType:inDirectory:;
- (id)initWithPath:;
- (id)description;
@end
