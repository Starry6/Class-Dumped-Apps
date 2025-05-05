@interface HTSLiveLinkerLeaveContent : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) IESLiveListUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSMutableArray preLinkUsersArray;
@property (nonatomic) Q preLinkUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
@property (nonatomic) NSInteger leaveSource;
@property (nonatomic) IESLivePreRTCInfo preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (nonatomic) NSMutableArray listUsersArray;
@property (nonatomic) Q listUsersArray_Count;
@property (nonatomic) q preRtcVersion;
+ (id)descriptor;
@end
