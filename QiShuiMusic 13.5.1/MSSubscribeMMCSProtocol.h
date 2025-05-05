@interface MSSubscribeMMCSProtocol : MSMMCSProtocol
@property (nonatomic) <MSSubscribeStorageProtocolDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (void)deactivate;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithPersonID:;
- (void)retrieveAssets:;
- (void)_getItemDone:path:error:;
- (void)_requestCompleted;
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:;
@end
