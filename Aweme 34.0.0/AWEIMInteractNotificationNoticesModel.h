@interface AWEIMInteractNotificationNoticesModel : IESIMBaseApiModel
@property (nonatomic) NSNumber noticeID;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSString hint;
@property (nonatomic) NSString highlight;
@property (nonatomic) NSString senderName;
@property (nonatomic) BOOL isOfficial;
@property (nonatomic) NSArray effectGroup;
- (void)setNoticeID:;
- (id)noticeID;
- (id)effectGroup;
- (void)setEffectGroup:;
- (void)setIsOfficial:;
- (BOOL)isOfficial;
- (id)createTime;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (id)highlight;
- (void)setHighlight:;
- (id)senderName;
- (id)hint;
- (void)setHint:;
- (void)setSenderName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
