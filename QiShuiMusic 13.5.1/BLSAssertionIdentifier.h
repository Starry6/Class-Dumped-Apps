@interface BLSAssertionIdentifier : NSObject
@property (nonatomic) NSInteger hostPid;
@property (nonatomic) NSInteger clientPid;
@property (nonatomic) Q count;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)clientPid;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)initWithClientPid:hostPid:count:;
- (int)hostPid;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)nextCount;
@end
