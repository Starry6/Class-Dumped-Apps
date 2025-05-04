@interface AWEMusicPreferences : NSObject
@property (nonatomic) RxMultipleDelegate<AWEMusicPreferencesDelegate> multipleDelegate;
@property (nonatomic) Q loopMode;
- (unsigned long long)loopMode;
- (void)setLoopMode:;
- (id)multipleDelegate;
- (void)setMultipleDelegate:;
- (id)storage;
- (void)addObserver:;
- (void).cxx_destruct;
+ (id)shared;
@end
