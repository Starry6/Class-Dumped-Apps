@interface AWEGDContainerRecoveryProvider : NSObject
@property (nonatomic) AWEGoodsDetailPageContext context;
@property (nonatomic) NSDictionary ditoDataDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)industrySettings;
- (void)setDitoDataDict:;
- (id)ditoDataDict;
- (id)industryKeyFromDitoDataDict:;
- (BOOL)canShowNaviPayBar:;
- (void)routerToPayWithDitoDataDict:;
- (id)buttonTitleWithDitoDataDict:byDefault:;
- (id)templateUrlWithDitoDataDict:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
