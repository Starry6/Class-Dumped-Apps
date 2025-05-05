@interface HTSLiveLikeEggJumpDetail : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) HTSLiveGroupPhotoJumpDetail photoJumpDetail;
@property (nonatomic) BOOL hasPhotoJumpDetail;
@property (nonatomic) HTSLiveTemplatePhotoJumpDetail templatePhotoJumpDetail;
@property (nonatomic) BOOL hasTemplatePhotoJumpDetail;
+ (id)descriptor;
@end
