@interface IESLiveSaaSGetSettingsResponse_ResponseData : GPBMessage
@property (nonatomic) NSInteger isTurnOn;
@property (nonatomic) BOOL bigPartyAcceptNeedVerified;
@property (nonatomic) BOOL bigPartyOnlyAcceptFollowerApply;
@property (nonatomic) BOOL intimateChatOnlyAcceptFollowerApply;
@property (nonatomic) BOOL intimateChatOnlyJoinThroughInvitation;
@property (nonatomic) BOOL intimateChatAcceptNeedVerified;
@property (nonatomic) BOOL audioChatAcceptNeedVerified;
@property (nonatomic) BOOL audioChatOnlyAcceptFollowerApply;
@property (nonatomic) NSMutableArray settingsArray;
@property (nonatomic) Q settingsArray_Count;
+ (id)descriptor;
@end
