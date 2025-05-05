@interface IESLiveLinkmicSettingApi : HTSLiveApi
- (void)fetchAudienceSettings:keys:callback:;
- (void)fetchSettings:userID:secUserID:callback:;
- (void)updateAudienceSettings:settings:callback:;
- (void)updateSetting:scene:extParams:callback:;
@end
