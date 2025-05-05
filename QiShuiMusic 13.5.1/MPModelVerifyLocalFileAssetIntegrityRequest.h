@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject
@property (nonatomic) MPIdentifierSet sourceItemIdentifiers;
@property (nonatomic) MPModelFileAsset fileAsset;
- (void)performWithResponseHandler:;
- (void).cxx_destruct;
- (id)initWithFileAsset:sourceItemIdentifiers:;
- (id)mediaLibraryForItemIdentifiers:;
- (id)sourceItemIdentifiers;
- (void)setSourceItemIdentifiers:;
- (id)fileAsset;
- (void)setFileAsset:;
+ (id)_operationQueue;
@end
