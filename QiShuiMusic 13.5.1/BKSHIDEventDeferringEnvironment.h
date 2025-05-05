@interface BKSHIDEventDeferringEnvironment : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_isKeyboardFocusEnvironment;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (id)initWithBSXPCCoder:;
- (BOOL)_isSystemEnvironment;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)protobufSchema;
+ (id)keyboardFocusEnvironment;
+ (BOOL)supportsSecureCoding;
+ (id)environmentWithIdentifier:;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)systemEnvironment;
@end
