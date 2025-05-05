@interface IESLiveSaaSPBLinkerUpdateUserContent : GPBMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) NSMutableDictionary updateInfo;
@property (nonatomic) Q updateInfo_Count;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSString extra;
@property (nonatomic) Q version;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) NSString ackMessage;
+ (id)descriptor;
@end
