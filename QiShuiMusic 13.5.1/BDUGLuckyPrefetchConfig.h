@interface BDUGLuckyPrefetchConfig : MTLModel
@property (nonatomic) NSNumber globalEnableInject;
@property (nonatomic) NSString project;
@property (nonatomic) NSString version;
@property (nonatomic) NSDictionary rules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)project;
- (id)globalEnableInject;
- (void)setGlobalEnableInject:;
- (void)setProject:;
- (void)setVersion:;
- (id)version;
- (id)initWithDictionary:error:;
- (id)rules;
- (void)setRules:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
