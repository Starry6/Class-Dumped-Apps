@interface AWEConcernFansToolUserInfo : NSObject
@property (nonatomic) BOOL isShownShareTooltips;
@property (nonatomic) double timeForTrafficCycle;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) NSMutableDictionary yellowDotInfo;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString userID;
@property (nonatomic) BOOL isNewUserYellowDot;
@property (nonatomic) q trafficCount;
@property (nonatomic) BOOL isNeedReceiveTraffic;
@property (nonatomic) BOOL isFansToolBasicMode;
- (void)removeNewUserYellowDot:;
- (BOOL)canShowYellowDot:;
- (void)expiredTrafficYellowDot;
- (BOOL)isFansToolBasicMode;
- (BOOL)isShownShareTooltips;
- (BOOL)isNeedReceiveTraffic;
- (long long)trafficCount;
- (void)showedShareTooltips;
- (BOOL)__canShowNewUserYellowDot:;
- (void)setIsNewUserYellowDot:;
- (BOOL)isNewUserYellowDot;
- (BOOL)__canShowTrafficYellowDot;
- (void)setIsShownShareTooltips:;
- (id)__keyForFansTool:;
- (id)yellowDotInfo;
- (void)__storeYellowDotInfo;
- (void)setTimeForTrafficCycle:;
- (void)setTrafficCount:;
- (void)setIsNeedReceiveTraffic:;
- (void)setIsFansToolBasicMode:;
- (void)__expiredNewUserYellowDot;
- (double)timeForTrafficCycle;
- (void)setYellowDotInfo:;
- (id)userID;
- (BOOL)isAvailable;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)initWithUserModel:;
- (void)setIsAvailable:;
- (void)setUserID:;
- (void)updateUserInfo:;
@end
