@interface IESLiveSaaSPBLinkerLeaveContent : GPBMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) IESLiveSaaSPBListUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSMutableArray preLinkUsersArray;
@property (nonatomic) Q preLinkUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) NSInteger leaveSource;
@property (nonatomic) NSMutableArray listUsersArray;
@property (nonatomic) Q listUsersArray_Count;
@property (nonatomic) q preRtcVersion;
+ (id)descriptor;
@end
