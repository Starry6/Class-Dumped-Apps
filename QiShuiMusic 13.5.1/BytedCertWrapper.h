@interface BytedCertWrapper : NSObject
@property (nonatomic) BytedCertUIConfig uiConfig;
@property (nonatomic) NSMutableDictionary modelPathList;
- (void)doFaceLivenessWithParams:extraParams:callback:;
- (void)doFaceLivenessWithParams:extraParams:shouldPresent:callback:;
- (void)doFaceLivenessWithParams:extraParams:shouldPresent:ignoreInit:callback:;
- (void)doFaceLivenessWithParams:shouldPresent:callback:;
- (void)doOCRWithType:params:ignoreInit:callback:;
- (id)getSDKVersionInfo;
- (void)invokeTakePhotoAlert:callback:;
- (void)invokeTakePhotoByAlbum:callback:;
- (void)invokeTakePhotoByCamera:callback:;
- (id)modelPathList;
- (void)setModelPathList:;
- (id)uiConfig;
- (id)init;
- (void)setLanguage:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
