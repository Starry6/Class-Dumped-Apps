@interface AWEIMInteractNotificationNoticesModel : IESIMBaseApiModel
@property (nonatomic) NSNumber noticeID;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSString hint;
@property (nonatomic) BOOL isOfficial;
@property (nonatomic) NSArray effectGroup;
- (void)setEffectGroup:;
- (id)effectGroup;
- (BOOL)isOfficial;
- (id)noticeID;
- (void)setIsOfficial:;
- (void)setNoticeID:;
- (id)createTime;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (void)setHint:;
- (id)hint;
+ (id)JSONKeyPathsByPropertyKey;
@end
