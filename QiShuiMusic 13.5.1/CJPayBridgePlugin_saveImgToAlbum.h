@interface CJPayBridgePlugin_saveImgToAlbum : TTBridgePlugin
- (void)p_callBackFailWithMsg:callback:;
- (BOOL)p_isAuthorizedWithStatus:;
- (void)saveImgToAlbumWithParam:callback:engine:controller:command:;
- (void)saveToAlbumWithData:callback:;
- (void)trySaveToAlbumWithData:callback:command:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
