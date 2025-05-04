@interface AWEUGTaskRuleMatcherModel : MTLModel
@property (nonatomic) NSArray videoType;
@property (nonatomic) NSArray page;
@property (nonatomic) AWEUGHostInfoModel hostInfoModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostInfoModel;
- (void)setHostInfoModel:;
- (id)page;
- (id)videoType;
- (void).cxx_destruct;
- (void)setVideoType:;
- (void)setPage:;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
