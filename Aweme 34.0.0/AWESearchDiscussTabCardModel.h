@interface AWESearchDiscussTabCardModel : MTLModel
@property (nonatomic) NSArray tabList;
@property (nonatomic) AWESearchDiscussTabColorModel color;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabList;
- (void)setTabList:;
- (id)color;
- (void)setColor:;
- (void).cxx_destruct;
+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;
@end
