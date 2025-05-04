@interface AWEStudioStoryTTLHelperImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)getCorrectStoryTTL:;
- (void)cacheTTLIfNeeded:;
- (id)getDescWithTTL:;
- (id)getBtnDescWithTTL:;
- (id)fetchModelArr;
- (BOOL)shouldAdjustBtnTitle;
- (BOOL)shouldShowGuideViewForStoryTTL:;
- (void)increaseGuideViewOccurredTimesForStoryTTL;
- (long long)getGuideViewOccurredTimesForStoryTTL;
- (id)storyTTLSwitchView:selectResultBlock:;
- (BOOL)shouldCacheStoryTTL;
- (BOOL)isTTLOverMinimumCacheValue:;
- (BOOL)p_isValidStoryTTL:;
- (long long)defaultTTL;
- (void)setSelectedTextColorWithControl:models:;
- (id)init;
@end
