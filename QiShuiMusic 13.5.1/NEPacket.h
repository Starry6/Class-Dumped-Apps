@interface NEPacket : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) C protocolFamily;
@property (nonatomic) q direction;
@property (nonatomic) NEFlowMetaData metadata;
- (long long)direction;
- (void)dealloc;
- (id)data;
- (id)metadata;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithData:protocolFamily:;
- (unsigned char)protocolFamily;
+ (BOOL)supportsSecureCoding;
@end
