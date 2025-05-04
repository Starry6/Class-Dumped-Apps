@interface AWEPadPolymericChannelSectionHeaderExtraModel : MTLModel
@property (nonatomic) NSArray tabList;
@property (nonatomic) NSArray filterList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabList;
- (id)filterList;
- (void)setFilterList:;
- (void)setTabList:;
- (void).cxx_destruct;
+ (id)tabListJSONTransformer;
+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
