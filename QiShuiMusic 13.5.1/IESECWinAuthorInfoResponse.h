@interface IESECWinAuthorInfoResponse : IESECBaseApiModel
@property (nonatomic) IESECWinAuthorInfo authorInfo;
@property (nonatomic) IESECRelationShoppingCartInfoModel shoppingCartInfo;
- (id)authorInfo;
- (void)setAuthorInfo:;
- (void)setShoppingCartInfo:;
- (id)shoppingCartInfo;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
