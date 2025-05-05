@interface IESLiveSaaSJoinChannelResponse_ResponseData : GPBMessage
@property (nonatomic) NSString prompt;
@property (nonatomic) IESLiveSaaSJoinChannelResponse_DelegateSetting delegateSetting;
@property (nonatomic) BOOL hasDelegateSetting;
@property (nonatomic) NSString token;
@property (nonatomic) NSString liveCoreSettings;
@property (nonatomic) q payCount;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) NSInteger applyType;
@property (nonatomic) IESLiveSaaSPBMatchEffect matchEffect;
@property (nonatomic) BOOL hasMatchEffect;
@property (nonatomic) IESLiveSaaSPBMsgBoardItemInfo msgBoardItem;
@property (nonatomic) BOOL hasMsgBoardItem;
@property (nonatomic) BOOL isPaidLinkmic;
@property (nonatomic) NSString promptWithEarphone;
+ (id)descriptor;
@end
