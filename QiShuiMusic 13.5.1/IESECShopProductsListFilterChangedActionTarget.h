@interface IESECShopProductsListFilterChangedActionTarget : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHybridContext:;
- (void)listFilterDidChangeActivityFilter:;
- (void)listFilterDidChangePickType:;
- (void)listFilterDidChangeWithItem:order:;
- (void)reloadHybridList;
- (void).cxx_destruct;
@end
