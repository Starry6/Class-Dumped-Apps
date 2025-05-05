@interface GEOLocalTimeInterval : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
- (id)init;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)initWithCoder:;
- (double)startTime;
- (double)endTime;
- (void)encodeWithCoder:;
- (id)initWithLocalTimeRange:;
- (id)initWithStartTime:endTime:;
+ (BOOL)supportsSecureCoding;
@end
