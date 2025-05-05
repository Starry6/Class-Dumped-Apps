@interface VEFilterFeature : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) Q filterType;
- (void)setFilterType:;
- (unsigned long long)filterType;
- (void)setStartTime:;
- (id)identifier;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
@end
