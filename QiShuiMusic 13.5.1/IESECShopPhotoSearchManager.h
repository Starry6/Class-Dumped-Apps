@interface IESECShopPhotoSearchManager : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString enableGoodsScan;
@property (nonatomic) NSString scanType;
@property (nonatomic) IESECShopPhotoSearchScanParams scanParams;
- (id)enableGoodsScan;
- (id)enterFrom;
- (void)redirectToPhotoSearchPageWithParameters:;
- (id)scanParams;
- (void)setEnableGoodsScan:;
- (void)setEnterFrom:;
- (void)setScanParams:;
- (id)init;
- (id)scanType;
- (void).cxx_destruct;
- (void)setScanType:;
- (id)previousPage;
- (void)setPreviousPage:;
@end
