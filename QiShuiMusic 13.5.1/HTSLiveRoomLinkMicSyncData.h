@interface HTSLiveRoomLinkMicSyncData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) IESLiveLinkerBaseInfo linkerBaseInfo;
@property (nonatomic) BOOL hasLinkerBaseInfo;
@property (nonatomic) NSMutableArray lockedPositionsArray;
@property (nonatomic) Q lockedPositionsArray_Count;
@property (nonatomic) NSMutableArray positionsArray;
@property (nonatomic) Q positionsArray_Count;
@property (nonatomic) q placeholder;
@property (nonatomic) IESLiveClientUIInfo clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;
+ (id)descriptor;
@end
