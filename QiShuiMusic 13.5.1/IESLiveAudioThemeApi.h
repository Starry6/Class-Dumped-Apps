@interface IESLiveAudioThemeApi : HTSLiveApi
- (void)addUGCBackground:bgType:fileFormat:showArea:roomID:anchorID:completion:;
- (void)deleteImage:roomID:anchorID:bgType:completion:;
- (void)fetchLatestThemeWithBGType:roomID:anchorID:completion:;
- (void)fetchList:roomID:bgType:imageType:playMode:completion:;
- (void)monitorEvent:serviceName:roomID:anchorID:parameters:error:;
- (void)setTheme:roomID:anchorID:imageType:bgType:completion:;
@end
