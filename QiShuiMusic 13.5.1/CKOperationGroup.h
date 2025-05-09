@interface CKOperationGroup : NSObject
@property (nonatomic) NSString safari_logDescription;
@property (nonatomic) CKOperationGroupSystemImposedInfo systemImposedInfo;
@property (nonatomic) NSNumber quantityNumber;
@property (nonatomic) NSString authPromptReason;
@property (nonatomic) q approximateSendBytes;
@property (nonatomic) q approximateReceiveBytes;
@property (nonatomic) NSString operationGroupID;
@property (nonatomic) CKOperationConfiguration defaultConfiguration;
@property (nonatomic) NSString name;
@property (nonatomic) Q quantity;
@property (nonatomic) q expectedSendSize;
@property (nonatomic) q expectedReceiveSize;
- (id)safari_logDescription;
- (void)setQuantity:;
- (id)init;
- (void)setName:;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (void)setExpectedSendSize:;
- (id)initWithCoder:;
- (id)defaultConfiguration;
- (void)setExpectedReceiveSize:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)expectedSendSize;
- (id)description;
- (void)setDefaultConfiguration:;
- (long long)expectedReceiveSize;
- (id)name;
- (id)operationGroupID;
- (id)systemImposedInfo;
- (void)setSystemImposedInfo:;
- (unsigned long long)quantity;
- (long long)approximateSendBytes;
- (long long)approximateReceiveBytes;
- (unsigned long long)resolvedNetworkServiceTypeForConfig:;
- (id)quantityNumber;
- (void)setQuantityNumber:;
- (id)authPromptReason;
- (void)setAuthPromptReason:;
+ (BOOL)supportsSecureCoding;
@end
