@interface SAValueCondition : AceObject
@property (nonatomic) NSArray legalValues;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)legalValues;
- (void)setLegalValues:;
+ (id)valueCondition;
+ (id)valueConditionWithDictionary:context:;
@end
