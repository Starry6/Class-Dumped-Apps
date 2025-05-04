@interface AWELiveStatusInfoABConfigImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableIMShowLiveStatus;
+ (BOOL)enableIMLiveAvatorEnterLiveRoom;
+ (BOOL)imChatLiveStatusCycleFix;
+ (long long)imCheckLiveStatusSingDuration;
+ (long long)imCheckLiveStatusHeartbeatDuration;
+ (long long)imCheckLiveStatusSingleMaxNum;
@end
