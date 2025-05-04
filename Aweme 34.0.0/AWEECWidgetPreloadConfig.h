@interface AWEECWidgetPreloadConfig : MTLModel
@property (nonatomic) BOOL needCheckShow;
@property (nonatomic) NSArray entranceRuleList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entranceRuleList;
- (BOOL)needCheckShow;
- (void)setNeedCheckShow:;
- (void)setEntranceRuleList:;
- (void).cxx_destruct;
+ (id)entranceRuleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
