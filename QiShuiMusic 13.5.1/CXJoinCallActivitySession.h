@interface CXJoinCallActivitySession : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSUUID UUID;
@property (nonatomic) CXJoinCallActivity activity;
@property (nonatomic) Q state;
- (void)setState:;
- (void)setActivity:;
- (void)setUUID:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)activity;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithActivity:;
- (BOOL)isEqualToJoinCallActivitySession:;
+ (BOOL)supportsSecureCoding;
@end
