@interface AWEPluginSensitiveAPIImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCertWithType:;
- (void)bdp_requestAccessCameraWithType:completionHandler:;
- (BOOL)bdp_startRunningWithCaptureSession:type:error:;
- (BOOL)bdp_stopRunningWithCaptureSession:type:error:;
- (void)bdp_requestAccessMicrophoneWithType:completionHandler:;
- (int)bdp_startAudioOutputUnitWithAudioUnit:type:error:;
- (int)bdp_stopAudioOutputUnitWithAudioUnit:type:error:;
- (void)bdp_requestRecordPermissionWithType:audioSession:completion:;
- (void)bdp_getClipboardWithType:completion:;
- (BOOL)bdp_setClipboardWithType:content:error:;
- (void)bdp_openURL:type:options:completion:;
- (id)bdp_initSKStoreWithType:;
- (void)bdp_requestAlbumAuthorization:completionHandler:forAccessLevel:;
- (id)bdp_calendarsForEntityType:type:eventStore:error:;
- (long long)bdp_authorizationStatusForEntityType:type:error:;
- (void)bdp_requestAccessToEntityType:type:eventStore:completion:;
- (BOOL)bdp_saveEvent:type:span:eventStore:error:;
+ (id)sharedPlugin;
@end
