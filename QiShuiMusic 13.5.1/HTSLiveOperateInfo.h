@interface HTSLiveOperateInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText creatorText;
@property (nonatomic) BOOL hasCreatorText;
@property (nonatomic) q creatorUid;
+ (id)descriptor;
@end
