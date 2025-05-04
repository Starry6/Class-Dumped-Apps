@interface AWEContactsTrackManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackContactRequestResponse:;
+ (void)trackEnterPhoneContactsList:enterMethod:;
+ (void)trackContactListEmptyGuidance:;
+ (void)trackContactListGuidanceBar:actionType:;
+ (void)trackContactsFriendsShow:;
+ (void)trackContactNotifyShow:triggerScene:;
+ (void)trackContactNotifyAuth:triggerScene:;
+ (void)trackPhonePermission:;
+ (void)trackContactNotifySelectNum;
+ (void)trackContactRetryNotifyShow:triggerScene:;
+ (void)trackContactRetryNotifyAuth:triggerScene:;
+ (void)trackDouyinContactNotifyAuth:triggerScene:actionType:;
+ (void)trackDouyinContactNotifyReject:triggerScene:;
+ (void)trackDouyinContactNotifyClose:triggerScene:;
+ (void)trackAddressListCardWithEnterFrom:actionType:triggerScene:;
+ (void)trackContactNotifyWithEvent:enterFrom:triggerScene:;
+ (void)trackAddressListCardWithActionType:enterFrom:;
@end
