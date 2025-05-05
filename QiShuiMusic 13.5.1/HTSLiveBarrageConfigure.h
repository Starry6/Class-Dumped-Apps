@interface HTSLiveBarrageConfigure : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage logo;
@property (nonatomic) BOOL hasLogo;
@property (nonatomic) NSString text;
@property (nonatomic) NSString atomsBgcolor;
@property (nonatomic) NSString atomsFrame;
@property (nonatomic) NSString atomsText;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
+ (id)descriptor;
@end
