@interface HTSLiveAvatarLiveInfo : IESLivePBBaseMessage
@property (nonatomic) NSString type;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger textSize;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
+ (id)descriptor;
@end
