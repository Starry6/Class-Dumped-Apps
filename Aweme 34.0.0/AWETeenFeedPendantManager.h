@interface AWETeenFeedPendantManager : NSObject
@property (nonatomic) AWETeenPendantModel pendantSettings;
@property (nonatomic) BOOL pendantShowTracked;
- (void)tryToShowPendant;
- (BOOL)shouldShowPendant;
- (void)trackTeenPendantClick;
- (id)pendantSettings;
- (void)trackTeenPendantHide;
- (id)pendantCacheKey;
- (void)setPendantShowTracked:;
- (void)setPendantSettings:;
- (void)p_trackTeenPendantLoadWithError:urlString:;
- (void)trackTeenPendantShow;
- (BOOL)pendantShowTracked;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
