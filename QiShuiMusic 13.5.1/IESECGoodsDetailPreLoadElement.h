@interface IESECGoodsDetailPreLoadElement : MTLModel
@property (nonatomic) NSArray lynxCardList;
@property (nonatomic) NSArray nativeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxCardList;
- (id)nativeList;
- (void)setLynxCardList:;
- (void)setNativeList:;
- (void).cxx_destruct;
+ (id)getPreLoadElementWithDict:;
+ (id)lynxCardListJSONTransformer;
+ (id)nativeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
