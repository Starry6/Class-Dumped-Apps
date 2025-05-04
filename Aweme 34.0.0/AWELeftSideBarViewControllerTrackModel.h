@interface AWELeftSideBarViewControllerTrackModel : NSObject
@property (nonatomic) BOOL isSlideWhileShow;
@property (nonatomic) BOOL isClickWhileShow;
@property (nonatomic) double openTimeInterval;
@property (nonatomic) double willResignActiveTimeInterval;
@property (nonatomic) double unActiveTimeInterval;
@property (nonatomic) double latestTimeInterval;
@property (nonatomic) double durationTimeInterval;
- (BOOL)isSlideWhileShow;
- (void)setIsSlideWhileShow:;
- (void)setOpenTimeInterval:;
- (void)setLatestTimeInterval:;
- (double)openTimeInterval;
- (double)unActiveTimeInterval;
- (double)latestTimeInterval;
- (BOOL)isClickWhileShow;
- (void)setIsClickWhileShow:;
- (void)setDurationTimeInterval:;
- (void)setWillResignActiveTimeInterval:;
- (double)willResignActiveTimeInterval;
- (void)setUnActiveTimeInterval:;
- (double)durationTimeInterval;
@end
