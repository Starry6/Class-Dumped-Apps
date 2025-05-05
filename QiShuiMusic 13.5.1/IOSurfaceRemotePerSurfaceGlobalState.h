@interface IOSurfaceRemotePerSurfaceGlobalState : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSurfaceID:mappedAddress:mappedSize:extraData:;
- (id)mergeExtraData:;
+ (id)globalStateForSurface:mappedAddress:mappedSize:extraData:;
@end
