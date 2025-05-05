@interface SAHAActionResult : SADomainObject
@property (nonatomic) SAHAEntity entity;
@property (nonatomic) NSString outcome;
@property (nonatomic) NSArray relatedEntityIds;
@property (nonatomic) NSString requestActionId;
@property (nonatomic) NSString resultAttribute;
@property (nonatomic) SAHAAttributeValue resultValue;
- (void)setEntity:;
- (id)entity;
- (id)groupIdentifier;
- (id)outcome;
- (id)encodedClassName;
- (void)setOutcome:;
- (id)relatedEntityIds;
- (void)setRelatedEntityIds:;
- (id)requestActionId;
- (void)setRequestActionId:;
- (id)resultAttribute;
- (void)setResultAttribute:;
- (id)resultValue;
- (void)setResultValue:;
+ (id)actionResult;
+ (id)actionResultWithDictionary:context:;
@end
