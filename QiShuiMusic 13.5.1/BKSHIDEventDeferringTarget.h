@interface BKSHIDEventDeferringTarget : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) BKSHIDEventDeferringToken token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)token;
- (id)_initWithPID:token:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
@end
