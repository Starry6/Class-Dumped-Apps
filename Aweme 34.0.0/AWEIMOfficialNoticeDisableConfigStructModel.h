@interface AWEIMOfficialNoticeDisableConfigStructModel : IESIMBaseApiModel
@property (nonatomic) NSString noticeTypeID;
@property (nonatomic) BOOL disturb;
@property (nonatomic) BOOL unsubscribe;
@property (nonatomic) NSString showName;
- (void)setNoticeTypeID:;
- (void)setUnsubscribe:;
- (void)setDisturb:;
- (id)noticeTypeID;
- (BOOL)disturb;
- (void).cxx_destruct;
- (BOOL)unsubscribe;
- (void)setShowName:;
- (id)showName;
+ (id)JSONKeyPathsByPropertyKey;
@end
