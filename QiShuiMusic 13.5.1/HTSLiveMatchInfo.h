@interface HTSLiveMatchInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMatchSkinInfo skin;
@property (nonatomic) BOOL hasSkin;
+ (id)descriptor;
@end
