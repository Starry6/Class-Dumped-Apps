@interface BDXBridgeSaveDataURLMethod : BDXBridgeMethod
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)requestPHAuthorizationWithCert:handler:;
- (Class)resultModelClass;
- (void)saveCompletionWithParamModel:;
- (void)saveImageToAlbumWithImage:completionHandler:;
- (void)saveMediaDidFinishSavingWithError:contextInfo:;
- (long long)authType;
- (id)methodName;
- (void)image:didFinishSavingWithError:contextInfo:;
+ (BOOL)allowBackgroundThreadCall;
+ (id)saveDataUrlAbsoluteFilePathStringByAppending:relativeFilePath:;
+ (id)metaInfo;
@end
