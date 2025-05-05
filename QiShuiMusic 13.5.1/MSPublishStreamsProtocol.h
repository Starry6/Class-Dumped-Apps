@interface MSPublishStreamsProtocol : MSStreamsProtocol
- (void)abort;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithPersonID:baseURL:;
- (id)_missingAssetFieldErrorWithFieldName:;
- (BOOL)_insertInfoAboutAsset:intoDictionary:outError:;
- (void)_resetConnectionVariables;
- (id)_metadataDictForAsset:outError:;
- (id)_metadataDictForAssetCollection:outError:;
- (void)sendMetadataForAssetCollections:;
- (void)sendUploadCompleteForAssetCollections:;
- (void)_coreProtocolDidFinishResponse:error:;
- (void)_coreProtocolDidFailAuthenticationError:;
- (void)_coreProtocolDidFinishUCResults:error:;
@end
