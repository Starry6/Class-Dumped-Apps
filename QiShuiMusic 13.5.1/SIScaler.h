@interface SIScaler : NSObject
- (void)dealloc;
- (id)initForOutputResolution:outputPixelFormat:mode:bytePerRowAlignment:algorithmKey:;
- (id)initForOutputResolution:outputPixelFormat:mode:algorithmKey:;
- (id)initForOutputResolution:outputPixelFormat:mode:;
- (id)initForInputResolution:outputResolution:outputPixelFormat:mode:;
- (id)initForInputResolution:outputResolution:outputPixelFormat:;
- (BOOL)scaleImage:outputBuffer:;
- (id)createScaledImage:;
- (id)scaleImage:;
- (BOOL)_imageConformsToOutput:;
@end
