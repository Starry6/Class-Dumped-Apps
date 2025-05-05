@interface IESLiveIMAppConfig : IESLiveIMAppInfo
@property (nonatomic) NSString unifiedWsUrl;
@property (nonatomic) NSString unifiedHttpUrl;
@property (nonatomic) double unifiedMaxUnusedTime;
@property (nonatomic) <IESLiveIMDecoder> unifiedDecoder;
@property (nonatomic) NSNumber liveId;
@property (nonatomic) NSString appLanguage;
@property (nonatomic) BOOL enableWS;
- (BOOL)enableWS;
- (id)liveId;
- (void)setEnableWS:;
- (void)setLiveId:;
- (void)setUnifiedDecoder:;
- (void)setUnifiedHttpUrl:;
- (void)setUnifiedMaxUnusedTime:;
- (void)setUnifiedWsUrl:;
- (id)unifiedDecoder;
- (id)unifiedHttpUrl;
- (double)unifiedMaxUnusedTime;
- (id)unifiedWsUrl;
- (id)init;
- (void).cxx_destruct;
- (id)appLanguage;
- (void)setAppLanguage:;
@end
