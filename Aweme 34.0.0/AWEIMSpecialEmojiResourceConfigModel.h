@interface AWEIMSpecialEmojiResourceConfigModel : MTLModel
@property (nonatomic) BOOL inAdvance;
@property (nonatomic) NSString triggerType;
@property (nonatomic) NSString name;
@property (nonatomic) NSString specialResource;
@property (nonatomic) NSNumber specialType;
@property (nonatomic) NSArray relationNames;
@property (nonatomic) AWEIMSpecialEmojiConfigModel config;
@property (nonatomic) NSNumber version;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specialType;
- (void)setSpecialType:;
- (BOOL)inAdvance;
- (void)setInAdvance:;
- (BOOL)p_enableFixCopyIssue;
- (id)specialResource;
- (void)setSpecialResource:;
- (id)relationNames;
- (void)setRelationNames:;
- (void)setConfig:;
- (id)config;
- (id)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (id)triggerType;
- (void)setTriggerType:;
- (void)setName:;
- (id)name;
- (id)copyWithZone:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
