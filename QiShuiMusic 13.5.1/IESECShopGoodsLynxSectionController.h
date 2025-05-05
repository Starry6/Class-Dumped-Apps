@interface IESECShopGoodsLynxSectionController : IGListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachState:;
- (id)cellForItemAtIndex:;
- (void)currentCardsWriteAlogMethodName:paramModel:result:context:;
- (void)didUpdateToObject:;
- (void)lynxCard:didLoadFail:;
- (void)lynxCard:sizeDidChanged:;
- (id)makeLynxCardModel:;
- (id)makeLynxGlobalProps;
- (void)p_extraOperation:;
- (id)p_getLynxData:;
- (id)p_getTemplateUrl:;
- (id)sectionLayout;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
