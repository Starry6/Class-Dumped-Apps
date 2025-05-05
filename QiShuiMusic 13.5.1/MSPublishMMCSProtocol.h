@interface MSPublishMMCSProtocol : MSMMCSProtocol
@property (nonatomic) <MSPublishStorageProtocolDelegate> delegate;
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
- (void)computeHashForAsset:;
- (int)_getFileDescriptorFromItem:;
- (id)_getUTIFromItem:;
- (void)_putItemDone:putReceipt:error:;
- (void)_requestCompleted;
- (void)publishAssets:URL:;
- (void)_putItemsFailure;
@end
