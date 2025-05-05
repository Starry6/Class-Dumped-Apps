@interface BKSHIDAuthenticatedKeyCommandSpecification : NSObject
@property (nonatomic) Q context;
@property (nonatomic) BKSHIDEventKeyCommand keyCommand;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)context;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)keyCommand;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (id)_init;
- (void)setContext:;
- (void)setKeyCommand:;
- (BOOL)isEqual:;
+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
+ (id)specificationWithKeyCommand:context:;
@end
