@interface HTSLiveLinkerBattleConnectContent : IESLivePBBaseMessage
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) Q version;
@property (nonatomic) NSMutableArray anchorUserListArray;
@property (nonatomic) Q anchorUserListArray_Count;
+ (id)descriptor;
@end
