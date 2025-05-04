@interface AWEHotSearchPostAwemeInfoModel : AWEBaseApiModel
@property (nonatomic) NSString musicID;
@property (nonatomic) NSString stickerID;
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString templateID;
- (id)musicID;
- (void)setMusicID:;
- (void)setStickerID:;
- (id)stickerID;
- (id)templateID;
- (void)setTemplateID:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)challengeID;
- (void)setChallengeID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
