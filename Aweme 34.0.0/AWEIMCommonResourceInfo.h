@interface AWEIMCommonResourceInfo : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString url;
@property (nonatomic) q type;
@property (nonatomic) q version;
@property (nonatomic) BOOL inAdvance;
@property (nonatomic) NSString triggerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)inAdvance;
- (void)setInAdvance:;
- (void)setUrl:;
- (long long)version;
- (long long)type;
- (void)setVersion:;
- (void)setType:;
- (void).cxx_destruct;
- (id)triggerType;
- (void)setTriggerType:;
- (void)setName:;
- (id)name;
- (id)url;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
