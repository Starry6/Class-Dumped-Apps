@interface IESLiveInteractSubtitleApi : HTSLiveApi
@property (nonatomic) IESLiveInteractSubtitleConfig config;
- (void)get:params:modelClass:callback:;
- (void)subtitleStartCheckWithRoomId:callback:;
- (void)subtitleStopCheckWithRoomId:callback:;
- (void)updateConfig:;
- (void)updateSubtitleCoordinate:callback:;
- (void)updateSubtitleSetting:toState:callback:;
- (void)updateSubtitleStyle:style:callback:;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
@end
