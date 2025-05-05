@interface IESLiveLinkMicAudienceUnSilenceResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString prompts;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
+ (id)descriptor;
@end
