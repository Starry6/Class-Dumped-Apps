@interface AWENaviColorTabOptionModel : MTLModel
@property (nonatomic) NSArray candidates;
@property (nonatomic) NSArray tabs;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCandidates:;
- (id)candidates;
- (id)colors;
- (void).cxx_destruct;
- (id)tabs;
- (void)setTabs:;
+ (id)candidatesJSONTransformer;
+ (id)tabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
