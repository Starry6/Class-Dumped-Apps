@interface CWFActivity : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSString reason;
@property (nonatomic) q type;
@property (nonatomic) Q timeout;
- (id)init;
- (void)setUUID:;
- (void)setType:;
- (void)setTimeout:;
- (id)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setReason:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (unsigned long long)timeout;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToActivity:;
+ (BOOL)supportsSecureCoding;
+ (id)activityWithType:reason:UUID:;
+ (id)activityWithType:reason:;
@end
