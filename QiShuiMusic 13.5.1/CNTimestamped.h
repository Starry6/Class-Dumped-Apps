@interface CNTimestamped : NSObject
@property (nonatomic) @ value;
@property (nonatomic) double timestamp;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (double)timestamp;
- (id)description;
- (id)value;
- (id)initWithValue:timestamp:;
- (BOOL)isEqual:;
+ (id)wrapTransformWithScheduler:;
+ (id)timestampedWithValue:timestamp:;
@end
