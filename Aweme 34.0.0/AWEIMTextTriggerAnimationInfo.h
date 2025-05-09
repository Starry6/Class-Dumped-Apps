@interface AWEIMTextTriggerAnimationInfo : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) q type;
@property (nonatomic) NSString name;
@property (nonatomic) q version;
@property (nonatomic) q weight;
@property (nonatomic) q beginIndex;
@property (nonatomic) BOOL inAdvance;
@property (nonatomic) NSString triggerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)inAdvance;
- (void)setInAdvance:;
- (void)setWeight:;
- (long long)weight;
- (void)setUrl:;
- (long long)version;
- (long long)type;
- (void)setVersion:;
- (id)description;
- (void)setType:;
- (void).cxx_destruct;
- (id)triggerType;
- (void)setTriggerType:;
- (BOOL)isEqual:;
- (void)setName:;
- (id)name;
- (id)url;
- (long long)beginIndex;
- (void)setBeginIndex:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
