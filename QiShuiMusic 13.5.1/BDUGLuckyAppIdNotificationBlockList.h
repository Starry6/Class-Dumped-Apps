@interface BDUGLuckyAppIdNotificationBlockList : BDUGLuckyBDModel
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray popupBlockList;
@property (nonatomic) NSArray letterBlockList;
- (id)letterBlockList;
- (id)popupBlockList;
- (void)setLetterBlockList:;
- (void)setPopupBlockList:;
- (id)appId;
- (void)setAppId:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
