@interface IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo : IESLivePBBaseMessage
@property (nonatomic) NSString URL;
@property (nonatomic) NSString failBackURL;
@property (nonatomic) NSString lIZIZ;
@property (nonatomic) NSString lIZJ;
@property (nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_ActivityContent activityContent;
@property (nonatomic) BOOL hasActivityContent;
+ (id)descriptor;
@end
