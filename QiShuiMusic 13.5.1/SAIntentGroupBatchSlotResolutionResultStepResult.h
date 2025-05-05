@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject
@property (nonatomic) NSString base64EncodedProtobufMessage;
@property (nonatomic) SACommandFailed commandFailed;
@property (nonatomic) NSString jsonEncodedSlotResolutionResult;
@property (nonatomic) NSString keyPath;
@property (nonatomic) NSString typeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)typeName;
- (id)groupIdentifier;
- (void)setTypeName:;
- (void)setKeyPath:;
- (id)encodedClassName;
- (id)keyPath;
- (id)base64EncodedProtobufMessage;
- (void)setBase64EncodedProtobufMessage:;
- (id)commandFailed;
- (void)setCommandFailed:;
- (id)jsonEncodedSlotResolutionResult;
- (void)setJsonEncodedSlotResolutionResult:;
+ (id)batchSlotResolutionResultStepResult;
+ (id)batchSlotResolutionResultStepResultWithDictionary:context:;
@end
