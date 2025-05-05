@interface TILinguisticAssetDownloadClientMock : NSObject
@property (nonatomic) q result;
@property (nonatomic) NSError error;
- (long long)result;
- (id)init;
- (id)error;
- (void)addLinguisticAssetsAssertionForLanguage:assertionID:region:clientID:withHandler:;
- (void).cxx_destruct;
- (id)initWithResult:error:;
- (void)removeLinguisticAssetsAssertionWithIdentifier:forClientID:withHandler:;
- (void)requestLinguisticAssetsForLanguage:completion:;
@end
