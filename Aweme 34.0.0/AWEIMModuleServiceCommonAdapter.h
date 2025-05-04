@interface AWEIMModuleServiceCommonAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEnableDuoShanDownload;
- (BOOL)shouldShowToastForUnSupportMessage:awemeType:;
- (id)unSupportMessageTips;
- (id)unSupportMessageContentForMessageType:awemeType:contentDict:;
- (BOOL)isDuoShan;
- (BOOL)enableB2CSmartAssistant;
- (BOOL)shouldShowFanGroupCommodiyEntry;
- (BOOL)shouldShowFanGroupCouponEntry;
- (BOOL)shouldShowFriendsOnlineRemindSwitch;
- (id)weakTarget;
+ (id)cdnPathPart;
+ (id)oneCardSupportSchemaConfig;
+ (Class)weakTargetClass;
@end
