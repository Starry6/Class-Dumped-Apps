@interface IESLiveLinkMicAudienceCheckPermissionResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicAudienceCheckPermissionResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) IESLiveLinkMicAudienceCheckPermissionExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
