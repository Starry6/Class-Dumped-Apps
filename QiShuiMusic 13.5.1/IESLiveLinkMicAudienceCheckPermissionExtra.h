@interface IESLiveLinkMicAudienceCheckPermissionExtra : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray payOptionsArray;
@property (nonatomic) Q payOptionsArray_Count;
@property (nonatomic) NSString linkMicPayHint;
+ (id)descriptor;
@end
