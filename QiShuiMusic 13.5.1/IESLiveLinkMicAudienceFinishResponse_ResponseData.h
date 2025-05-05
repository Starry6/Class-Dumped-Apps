@interface IESLiveLinkMicAudienceFinishResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q totalApply;
@property (nonatomic) q totalLinked;
@property (nonatomic) NSString liveCoreExtInfo;
+ (id)descriptor;
@end
