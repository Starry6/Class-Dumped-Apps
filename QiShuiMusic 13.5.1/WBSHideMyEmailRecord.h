@interface WBSHideMyEmailRecord : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) Q state;
@property (nonatomic) NSString privateEmailAddress;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (BOOL)isEqual:;
- (id)privateEmailAddress;
- (id)initWithDomain:state:privateEmailAddress:;
+ (BOOL)supportsSecureCoding;
@end
