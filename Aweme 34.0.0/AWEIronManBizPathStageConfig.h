@interface AWEIronManBizPathStageConfig : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary matchParams;
@property (nonatomic) NSArray indexParams;
@property (nonatomic) NSArray getParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getParams;
- (id)matchParams;
- (void)setMatchParams:;
- (id)indexParams;
- (void)setIndexParams:;
- (void)setGetParams:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
