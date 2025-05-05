@interface SAHAAction : SADomainObject
@property (nonatomic) NSString actionType;
@property (nonatomic) NSString attribute;
@property (nonatomic) NSArray executionFlags;
@property (nonatomic) q executionOrder;
@property (nonatomic) BOOL includeCompleteInformation;
@property (nonatomic) SAHAAttributeValue value;
- (void)setAttribute:;
- (id)attribute;
- (id)groupIdentifier;
- (id)actionType;
- (void)setActionType:;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (long long)executionOrder;
- (void)setExecutionOrder:;
- (id)executionFlags;
- (void)setExecutionFlags:;
- (BOOL)includeCompleteInformation;
- (void)setIncludeCompleteInformation:;
+ (id)action;
+ (id)actionWithDictionary:context:;
@end
