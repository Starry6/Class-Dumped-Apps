@interface IESLiveUpdateLinkmicStatusMethodImpl : IESLiveUpdateLinkmicStatusMethod
- (void)callWithParamModel:completionHandler:;
- (void)callback:error:param:completion:;
- (void)requestMicrophonePermission:context:completed:;
- (void)saveImageToAlbum:context:param:completion:;
@end
