@interface IESECShopProductsExposureTracker : NSObject
@property (nonatomic) <IESECShopProductsExposureTrackerDataSource> dataSource;
- (void)addProductID:;
- (id)unexposedProductIDs;
- (void)setDataSource:;
- (id)init;
- (void)clear;
- (id)dataSource;
- (void).cxx_destruct;
@end
