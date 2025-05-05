@interface HTSLiveAppearance_WideCover : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) q coverType;
+ (id)descriptor;
@end
