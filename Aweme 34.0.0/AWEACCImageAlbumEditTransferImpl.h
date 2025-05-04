@interface AWEACCImageAlbumEditTransferImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoEditorWithModel:;
- (void)continueAddedAssets:selectedAssets:publishModel:successBlock:failedBlock:;
- (id)transformLivePhotoVideoEditorWithModel:;
@end
