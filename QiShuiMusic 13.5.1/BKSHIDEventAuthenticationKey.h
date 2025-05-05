@interface BKSHIDEventAuthenticationKey : NSObject
@property (nonatomic) q generation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)generation;
+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
+ (id)eventAuthenticationKey;
+ (id)eventAuthenticationKeyWithKeyBuffer:length:;
@end
