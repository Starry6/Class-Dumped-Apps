@interface SFFeedback : NSObject
@property (nonatomic) Q timestamp;
@property (nonatomic) Q queryId;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setQueryId:;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)queryId;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
