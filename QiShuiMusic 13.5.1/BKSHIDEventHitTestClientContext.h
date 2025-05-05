@interface BKSHIDEventHitTestClientContext : NSObject
@property (nonatomic) NSInteger pid;
@property (nonatomic) I contextID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBSXPCCoder:;
- (unsigned int)contextID;
- (void)setContextID:;
- (int)pid;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (BOOL)isEqual:;
- (void)setPid:;
- (id)copyWithZone:;
+ (id)protobufSchema;
+ (BOOL)supportsBSXPCSecureCoding;
@end
