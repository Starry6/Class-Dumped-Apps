@interface AWEStickerApplyIMSocialEffectHandler : AWEStickerApplyBaseHandler
@property (nonatomic) NSString imgK;
@property (nonatomic) NSString vPath;
@property (nonatomic) BOOL isDuet;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) BOOL isVideoRecord;
@property (nonatomic) q layoutType;
@property (nonatomic) q imRecordType;
@property (nonatomic) Q enterType;
@property (nonatomic) <ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)resetBGVideo;
- (void)bgVideoPlay;
- (void)bgVideoPause;
- (void)bgVideoMutePlayer:;
- (void)setIsDuet:;
- (BOOL)isDuet;
- (BOOL)isFollow;
- (void)setIsFollow:;
- (id)imModel;
- (id)switchModeService;
- (void)setSwitchModeService:;
- (void)flowServiceWillAddFragment:;
- (void)flowServiceDidCompleteRecord;
- (void)handlerDidBecomeActive;
- (void)camera:willApplySticker:;
- (void)setImRecordType:;
- (long long)imRecordType;
- (void)setImgK:;
- (void)setVPath:;
- (void)p_resetIMSocialEffectReportModel;
- (BOOL)isIMSocialEffect:;
- (BOOL)isVideoRecord;
- (id)p_checkChatCategory:;
- (id)imgK;
- (void)setIsVideoRecord:;
- (id)vPath;
- (void)setLayoutType:;
- (long long)layoutType;
- (void).cxx_destruct;
- (unsigned long long)enterType;
- (void)setEnterType:;
@end
