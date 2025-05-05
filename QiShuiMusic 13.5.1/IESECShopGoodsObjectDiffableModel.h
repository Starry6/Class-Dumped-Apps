@interface IESECShopGoodsObjectDiffableModel : IESECObjectWrapper
@property (nonatomic) BOOL empty;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (Class)objectClass;
- (BOOL)isEmpty;
- (void)reset;
- (BOOL)isEqual:;
@end
