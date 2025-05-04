@interface AWEDTOPropMentionStickerInfo : MTLModel
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setSecUid:;
- (void)setUid:;
- (void)setStartTime:;
- (double)endTime;
- (id)uid;
- (void)setEndTime:;
- (void)setNickName:;
- (void).cxx_destruct;
- (double)startTime;
- (id)nickName;
- (double)centerX;
- (double)centerY;
- (void)setCenterX:;
- (void)setCenterY:;
+ (id)JSONKeyPathsByPropertyKey;
@end
