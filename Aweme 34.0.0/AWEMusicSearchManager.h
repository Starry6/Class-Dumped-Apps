@interface AWEMusicSearchManager : NSObject
- (id)search:completion:;
- (id)init;
+ (id)sharedInstance;
@end
