@interface HTSLiveUser_BrotherhoodInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) q level;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) NSString fontColor;
+ (id)descriptor;
@end
