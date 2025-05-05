@interface IESECGoodsSpecInfo : MTLModel
@property (nonatomic) NSArray specList;
@property (nonatomic) q selectedIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSpecList:;
- (id)specList;
- (id)init;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setSelectedIndex:;
+ (id)specListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
