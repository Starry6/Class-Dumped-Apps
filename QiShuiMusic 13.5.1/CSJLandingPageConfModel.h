@interface CSJLandingPageConfModel : NSObject
@property (nonatomic) q swipeBackType;
@property (nonatomic) q filter_track;
@property (nonatomic) CSJPreloadModel preloadModel;
- (BOOL)needIgnoreTrack;
- (long long)filter_track;
- (id)preloadModel;
- (void)setFilter_track:;
- (void)setPreloadModel:;
- (void)setSwipeBackType:;
- (long long)swipeBackType;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
