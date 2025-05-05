@interface HTSLiveBonusAuthor : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage avatarLarger;
@property (nonatomic) BOOL hasAvatarLarger;
@property (nonatomic) HTSLiveImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) HTSLiveImage avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
+ (id)descriptor;
@end
