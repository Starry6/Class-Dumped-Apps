@interface CTPlanTransferAttributes : NSObject
@property (nonatomic) Q transferCapability;
@property (nonatomic) Q transferStatus;
@property (nonatomic) BOOL isSecuredFlow;
@property (nonatomic) NSString transferEndpoint;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithTransferCapability:transferStatus:isSecuredFlow:transferEndpoint:;
- (unsigned long long)transferCapability;
- (void)setTransferCapability:;
- (unsigned long long)transferStatus;
- (void)setTransferStatus:;
- (BOOL)isSecuredFlow;
- (void)setIsSecuredFlow:;
- (id)transferEndpoint;
- (void)setTransferEndpoint:;
+ (BOOL)supportsSecureCoding;
@end
