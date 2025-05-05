@interface SAIntentGroupBatchSlotResolutionResult : AceObject
@property (nonatomic) NSString base64EncodedIntent;
@property (nonatomic) NSString jsonEncodedIntent;
@property (nonatomic) NSDictionary slotResolutionMap;
@property (nonatomic) NSArray stepResults;
@property (nonatomic) NSString typeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)typeName;
- (id)stepResults;
- (id)groupIdentifier;
- (void)setTypeName:;
- (id)encodedClassName;
- (void)setStepResults:;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
- (id)base64EncodedIntent;
- (void)setBase64EncodedIntent:;
- (id)slotResolutionMap;
- (void)setSlotResolutionMap:;
+ (id)batchSlotResolutionResult;
+ (id)batchSlotResolutionResultWithDictionary:context:;
@end
