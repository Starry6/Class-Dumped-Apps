@interface AWEECRecorderHelper : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)writeImageDataToDisk:;
+ (void)uploadPhotosWithBridgeParams:completion:;
+ (void)uploadPhotosWithBridgeParams:cameraOpt:completion:;
+ (void)uploadImages:params:eachProgress:completion:;
+ (void)uploadVideoWithURL:authToken:appKey:videoAuthorization:progressCallback:completion:;
+ (id)saveImageToLocalWithImage:;
+ (void)uploadImageTypePhotosWithBridgeParams:completion:;
+ (void)uploadCameraTypePhotosWithBridgeParams:cameraOpt:completion:;
+ (id)generateLocalImagePathWithImages:;
+ (id)externalRecorderViewControllerWithParams:completion:;
+ (BOOL)enableCameraBlockOpt;
+ (id)downScaleImage:;
+ (id)generateLocalVideoPathWithRecordModel:;
+ (id)generateLocalVideoInfoWithRecordModel:;
+ (id)addVideoLocalPathToOriginDictionary:localVideoPath:;
+ (void)uploadVideoWithURL:authToken:appKey:videoAuthorization:completion:;
+ (id)handleImageWithOriginResults:localPathArray:;
+ (id)generateImageDataWithImages:;
+ (void)uploadCameraTypePhotosWithBridgeParams:completion:;
+ (id)imageDataForImage:;
@end
