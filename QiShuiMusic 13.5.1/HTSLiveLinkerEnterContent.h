@interface HTSLiveLinkerEnterContent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSString userOpenId;
@property (nonatomic) NSInteger applyType;
@property (nonatomic) NSMutableArray preLinkUsersArray;
@property (nonatomic) Q preLinkUsersArray_Count;
@property (nonatomic) HTSLiveMatchEffect matchEffect;
@property (nonatomic) BOOL hasMatchEffect;
@property (nonatomic) HTSLiveCityEffect cityEffect;
@property (nonatomic) BOOL hasCityEffect;
@property (nonatomic) Q version;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) IESLiveMsgBoardItemInfo msgBoardItem;
@property (nonatomic) BOOL hasMsgBoardItem;
@property (nonatomic) IESLiveLinkIconConfig linkIconConfig;
@property (nonatomic) BOOL hasLinkIconConfig;
@property (nonatomic) NSString lynxData;
@property (nonatomic) IESLiveLinkmicUIConfig uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (nonatomic) BOOL battleDisplayEntrance;
+ (id)descriptor;
@end
