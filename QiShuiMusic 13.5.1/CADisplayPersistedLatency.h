@interface CADisplayPersistedLatency : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSDictionary mode;
@property (nonatomic) double latency;
- (double)latency;
- (void)setLatency:;
- (void)dealloc;
- (id)uuid;
- (void)setUuid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)mode;
- (void)setMode:;
+ (BOOL)supportsSecureCoding;
@end
