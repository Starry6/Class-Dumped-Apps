@interface IESLiveSaaSPBLinkerCrossRoomUpdateContent : GPBMessage
@property (nonatomic) q fromRoomId;
@property (nonatomic) q toRoomId;
@property (nonatomic) NSMutableDictionary updateInfo;
@property (nonatomic) Q updateInfo_Count;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
+ (id)descriptor;
@end
