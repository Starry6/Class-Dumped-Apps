@interface IESLiveChangeGiftReceiverParamModel : IESLiveBridgeModel
@property (nonatomic) NSString userId;
@property (nonatomic) BOOL isAllMic;
@property (nonatomic) NSArray userIds;
@property (nonatomic) NSString specifiedUser;
- (id)userIds;
- (BOOL)isAllMic;
- (void)setIsAllMic:;
- (void)setSpecifiedUser:;
- (void)setUserIds:;
- (id)specifiedUser;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
+ (id)modelCustomPropertyMapper;
@end
