@interface BDXBridgeSendSMSMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString content;
- (id)content;
- (void)setContent:;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
