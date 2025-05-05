@interface AMSFDSResult : NSObject
@property (nonatomic) Q action;
@property (nonatomic) NSString value;
- (unsigned long long)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)value;
- (id)copyWithZone:;
- (id)initWithValue:action:;
+ (BOOL)supportsSecureCoding;
@end
