@interface OSLogEventStreamPosition : NSObject
@property (nonatomic) r* sourceUUID;
@property (nonatomic) r* UUID;
@property (nonatomic) Q continuousTime;
- (id)sourceUUID;
- (id)initWithSource:bootUUID:time:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)continuousTime;
- (id)UUID;
+ (BOOL)supportsSecureCoding;
@end
