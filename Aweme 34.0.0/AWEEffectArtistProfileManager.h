@interface AWEEffectArtistProfileManager : NSObject
@property (nonatomic) q tipTextIndex;
- (void)setTipTextIndex:;
- (long long)tipTextIndex;
- (id)effectArtistProfileTipsViewText;
+ (id)sharedInstance;
@end
