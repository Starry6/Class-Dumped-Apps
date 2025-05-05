@interface TILinguisticAssetDownloadClient : NSObject
- (void)addLinguisticAssetsAssertionForLanguage:assertionID:region:clientID:withHandler:;
- (void)removeLinguisticAssetsAssertionWithIdentifier:forClientID:withHandler:;
- (void)requestLinguisticAssetsForLanguage:completion:;
- (id)_newXPCConnection;
+ (id)_dispatchQueue;
+ (id)_internalHandlerForHandler:connection:;
+ (id)_internalAssertionRequestHandlerForHandler:connection:;
@end
