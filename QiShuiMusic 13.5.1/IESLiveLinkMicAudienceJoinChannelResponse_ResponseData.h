@interface IESLiveLinkMicAudienceJoinChannelResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString prompt;
@property (nonatomic) IESLiveLinkMicAudienceJoinChannelResponse_DelegateSetting delegateSetting;
@property (nonatomic) BOOL hasDelegateSetting;
@property (nonatomic) NSString token;
@property (nonatomic) NSString liveCoreSettings;
@property (nonatomic) q payCount;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) NSInteger applyType;
@property (nonatomic) HTSLiveMatchEffect matchEffect;
@property (nonatomic) BOOL hasMatchEffect;
@property (nonatomic) HTSLiveCityEffect cityEffect;
@property (nonatomic) BOOL hasCityEffect;
@property (nonatomic) IESLiveMsgBoardItemInfo msgBoardItem;
@property (nonatomic) BOOL hasMsgBoardItem;
@property (nonatomic) BOOL isPaidLinkmic;
@property (nonatomic) NSString promptWithEarphone;
+ (id)descriptor;
@end
