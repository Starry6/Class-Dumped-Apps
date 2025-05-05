@interface ICAddToWishListRequest : ICRequestOperation
- (void)execute;
- (void)performWithResponseHandler:;
- (void).cxx_destruct;
- (id)initWithRequestContext:buyParams:storeItemID:itemName:itemKind:;
- (id)initWithRequestContext:platformMetadataItem:;
@end
