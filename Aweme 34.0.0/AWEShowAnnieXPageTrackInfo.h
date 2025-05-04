@interface AWEShowAnnieXPageTrackInfo : NSObject
@property (nonatomic) double willLoadTime;
@property (nonatomic) double loadEndTime;
- (void)setLoadEndTime:;
- (double)loadEndTime;
- (double)willLoadTime;
- (void)setWillLoadTime:;
@end
