@interface BDUGLuckyNotificationConfig : BDUGLuckyBDModel
@property (nonatomic) NSArray<BDUGLuckyAppIdNotificationBlockList> appIdNotificationBlockList;
@property (nonatomic) double popupInterval;
@property (nonatomic) double maxPopupQueueLockedDuration;
- (void)setMaxPopupQueueLockedDuration:;
- (id)appIdNotificationBlockList;
- (double)maxPopupQueueLockedDuration;
- (double)popupInterval;
- (void)setAppIdNotificationBlockList:;
- (void)setPopupInterval:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
