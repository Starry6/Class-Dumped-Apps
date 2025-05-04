@interface AWESearchMerchandiseSearchWordList : AWEBaseApiModel
@property (nonatomic) AWESearchMerchandiseCommonProp commonProp;
@property (nonatomic) NSArray elementList;
- (id)commonProp;
- (void)setCommonProp:;
- (id)elementList;
- (void)setElementList:;
- (void).cxx_destruct;
+ (id)elementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
