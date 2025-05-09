@interface AWEIMMixTaskDetailModel : NSObject
@property (nonatomic) NSString taskID;
@property (nonatomic) q taskStatus;
@property (nonatomic) NSString aiType;
@property (nonatomic) NSArray slotList;
@property (nonatomic) q slotNumber;
@property (nonatomic) BOOL isMultiPortrait;
@property (nonatomic) q roleType;
@property (nonatomic) NSString modelId;
@property (nonatomic) NSString stickerId;
@property (nonatomic) NSString stickerName;
@property (nonatomic) IESIMURLModel effectCover;
@property (nonatomic) NSString ugcStickerId;
@property (nonatomic) NSString ugcStickerName;
@property (nonatomic) q createTime;
@property (nonatomic) q updateTime;
@property (nonatomic) q waitingMinutes;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMainTitle;
@property (nonatomic) NSString statusSubTitle;
- (id)stickerId;
- (void)setStickerId:;
- (void)setTaskStatus:;
- (id)aiType;
- (void)setAiType:;
- (void)setRoleType:;
- (long long)roleType;
- (id)effectCover;
- (void)setEffectCover:;
- (BOOL)isMultiPortrait;
- (void)setIsMultiPortrait:;
- (id)ugcStickerId;
- (void)setUgcStickerId:;
- (id)ugcStickerName;
- (void)setUgcStickerName:;
- (long long)waitingMinutes;
- (void)setWaitingMinutes:;
- (void)setStatusMainTitle:;
- (void)setStatusSubTitle:;
- (id)slotList;
- (void)setSlotList:;
- (id)statusMainTitle;
- (id)statusSubTitle;
- (long long)statusCode;
- (void)setModelId:;
- (long long)createTime;
- (long long)updateTime;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (id)modelId;
- (void)setTaskID:;
- (void)setStatusCode:;
- (id)taskID;
- (void)setUpdateTime:;
- (id)stickerName;
- (void)setStickerName:;
- (long long)slotNumber;
- (long long)taskStatus;
- (void)setSlotNumber:;
@end
