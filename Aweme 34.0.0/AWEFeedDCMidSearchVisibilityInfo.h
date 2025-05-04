@interface AWEFeedDCMidSearchVisibilityInfo : NSObject
@property (nonatomic) double currentTime;
@property (nonatomic) NSArray visibleSectionControllers;
@property (nonatomic) NSDictionary sectionToVisiblePercentMap;
@property (nonatomic) NSArray sectionsBecameInvisible;
- (id)visibleSectionControllers;
- (void)setVisibleSectionControllers:;
- (id)sectionToVisiblePercentMap;
- (void)setSectionToVisiblePercentMap:;
- (id)sectionsBecameInvisible;
- (void)setSectionsBecameInvisible:;
- (void)setCurrentTime:;
- (double)currentTime;
- (void).cxx_destruct;
@end
