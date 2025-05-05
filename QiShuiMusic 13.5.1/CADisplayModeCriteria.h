@interface CADisplayModeCriteria : NSObject
@property (nonatomic) {CGSize=dd} resolution;
@property (nonatomic) double refreshRate;
@property (nonatomic) NSString hdrMode;
- (id)hdrMode;
- (id)init;
- (void)setHdrMode:;
- (void)dealloc;
- (void)setResolution:;
- (id)resolution;
- (double)refreshRate;
- (void)setRefreshRate:;
@end
