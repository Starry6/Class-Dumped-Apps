@interface AWEAlbumDuetViewModel : AWEAlbumBaseViewModel
@property (nonatomic) NSString convertTaskId;
@property (nonatomic) BOOL isCancelRequest;
@property (nonatomic) UIImage fakeFrameImage;
- (id)initWithInputData:;
- (void)convertAssetModelsToValidAssetModels:taskID:convertID:completion:;
- (void)goToNextWithMultiSelect:;
- (void)setConvertTaskId:;
- (id)convertTaskId;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (BOOL)shouldSelectAlbumAsset:;
- (void)trackSelectAsset:fromPreview:;
- (void)p_trackerUploadNextEventWithLabel:;
- (void)setIsCancelRequest:;
- (id)assembleAssets;
- (void)genFakeFrameElementWithDuetAssets:;
- (void)genDuetLeftToRightFakeFrameWithPublishViewModel:canvasSize:;
- (void)genDuetTopToBottomFakeFrameWithPublishViewModel:canvasSize:;
- (void)configTaskID:createID:assetModels:subTrackAssetModel:;
- (BOOL)isCancelRequest;
- (id)fakeFrameImage;
- (id)genFakeFrameImageWithFirstImage:secondImage:firstRect:secondRect:canvasSize:;
- (void)setFakeFrameImage:;
- (id)cropImage:targetRect:;
- (void).cxx_destruct;
@end
