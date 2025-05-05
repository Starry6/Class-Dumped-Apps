@interface IESLiveRegisterMessageLatchParamModel : IESLiveBridgeModel
@property (nonatomic) NSString messageType;
@property (nonatomic) NSString definition;
@property (nonatomic) NSString messageMethod;
- (id)messageMethod;
- (void)setMessageMethod:;
- (id)definition;
- (id)messageType;
- (void).cxx_destruct;
- (void)setMessageType:;
- (void)setDefinition:;
+ (id)modelCustomPropertyMapper;
@end
