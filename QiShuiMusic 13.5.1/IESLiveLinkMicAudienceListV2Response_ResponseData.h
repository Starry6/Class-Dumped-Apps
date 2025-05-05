@interface IESLiveLinkMicAudienceListV2Response_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) Q userArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) NSMutableArray lockedPositionsArray;
@property (nonatomic) Q lockedPositionsArray_Count;
@property (nonatomic) NSMutableArray preLinkUsersArray;
@property (nonatomic) Q preLinkUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) NSMutableArray positionsArray;
@property (nonatomic) Q positionsArray_Count;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) q roomId;
@property (nonatomic) IESLiveLinkerBaseInfo linkerBaseInfo;
@property (nonatomic) BOOL hasLinkerBaseInfo;
+ (id)descriptor;
@end
