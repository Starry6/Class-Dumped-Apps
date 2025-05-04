@interface AWEFeedDCPreferenceCacheModel : NSObject
@property (nonatomic) NSMutableDictionary uninterestedAwemesInfo;
@property (nonatomic) NSMutableDictionary isShowingAwemesStartTime;
@property (nonatomic) NSMutableArray uninterestedAwemes;
@property (nonatomic) NSMutableSet interestedAwemes;
@property (nonatomic) q infoCountLimits;
- (void)setIsShowingAwemesStartTime:;
- (void)setInterestedAwemes:;
- (void)setUninterestedAwemes:;
- (void)setUninterestedAwemesInfo:;
- (void)setInfoCountLimits:;
- (id)interestedAwemes;
- (id)isShowingAwemesStartTime;
- (id)uninterestedAwemes;
- (id)uninterestedAwemesInfo;
- (long long)infoCountLimits;
- (id)init;
- (void).cxx_destruct;
@end
