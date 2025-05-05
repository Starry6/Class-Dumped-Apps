@interface CADisplayPersistedData : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSMutableArray latencies;
@property (nonatomic) NSMutableArray preferredModes;
- (id)init;
- (void)dealloc;
- (void)save;
- (void)setVersion:;
- (id)version;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)update;
- (id)description;
- (void)setLatency:forUUID:andMode:;
- (double)latencyForUUID:andMode:;
- (void)setPreferredMode:forUUID:;
- (id)preferredModeForUUID:;
- (id)latencies;
- (void)setLatencies:;
- (id)preferredModes;
- (void)setPreferredModes:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
+ (id)supportedClasses;
@end
