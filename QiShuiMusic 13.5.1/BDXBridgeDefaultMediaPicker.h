@interface BDXBridgeDefaultMediaPicker : NSObject
@property (nonatomic) BDXBridgeChooseMediaMethodParamModel params;
@property (nonatomic) @? completionHandler;
@property (nonatomic) UIImagePickerController imagePicker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createTemporaryPathforVideoFile:;
- (void)finishWithResultModel:status:;
- (float)getCropRadio:sideWidth:;
- (id)imageDataForImageNew:;
- (BOOL)isCameraDenied;
- (id)mediaPickerWithParamModel:completionHandler:;
- (BOOL)supportedWithParamModel:;
- (id)writeImageDataToDisk:;
- (void)setCompletionHandler:;
- (id)imageDataForImage:;
- (void).cxx_destruct;
- (id)params;
- (id)completionHandler;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)setParams:;
- (id)imagePicker;
- (void)setImagePicker:;
@end
