@interface MSDeleteStreamsProtocol : MSStreamsProtocol
@property (nonatomic) <MSDeleteStreamsProtocolDelegate> delegate;
- (void)abort;
- (void).cxx_destruct;
- (id)initWithPersonID:baseURL:;
- (void)_resetConnectionVariables;
- (void)_coreProtocolDidFinishResponse:error:;
- (void)_coreProtocolDidFailAuthenticationError:;
- (void)sendDeletionRequestForAssetCollections:;
@end
