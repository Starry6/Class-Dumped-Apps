@interface ICIAMMessageRule : PBCodable
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasRuleOperator;
@property (nonatomic) NSInteger ruleOperator;
@property (nonatomic) NSMutableArray subrules;
@property (nonatomic) BOOL hasTriggerCondition;
@property (nonatomic) ICIAMTriggerCondition triggerCondition;
@property (nonatomic) BOOL hasTriggerEventName;
@property (nonatomic) NSString triggerEventName;
@property (nonatomic) BOOL hasRequiredApplicationContextBundleIdentifier;
@property (nonatomic) NSString requiredApplicationContextBundleIdentifier;
- (id)triggerCondition;
- (void)setTriggerCondition:;
- (void)addSubrules:;
- (id)subrules;
- (int)StringAsType:;
- (BOOL)hasRequiredApplicationContextBundleIdentifier;
- (int)ruleOperator;
- (id)identifier;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (BOOL)hasTriggerCondition;
- (BOOL)hasIdentifier;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (id)ruleOperatorAsString:;
- (void)clearSubrules;
- (int)type;
- (void)setTriggerEventName:;
- (id)subrulesAtIndex:;
- (void)setRuleOperator:;
- (void).cxx_destruct;
- (BOOL)hasTriggerEventName;
- (BOOL)hasRuleOperator;
- (BOOL)readFrom:;
- (id)requiredApplicationContextBundleIdentifier;
- (id)description;
- (id)triggerEventName;
- (void)setRequiredApplicationContextBundleIdentifier:;
- (id)dictionaryRepresentation;
- (void)setHasRuleOperator:;
- (unsigned long long)subrulesCount;
- (void)setIdentifier:;
- (int)StringAsRuleOperator:;
- (BOOL)isEqual:;
- (void)setSubrules:;
- (id)copyWithZone:;
+ (Class)subrulesType;
@end
