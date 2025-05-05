@interface IESECShopProductsLigoSubscriberTarget : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHybridContext:;
- (void)messageReceived_IESECOpenProductRefreshMessage:;
- (void)updateCellsWithProductsMap:;
- (void)updateProductsInfo:;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
