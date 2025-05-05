@interface HTSLiveButtonImage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage staticImage;
@property (nonatomic) BOOL hasStaticImage;
@property (nonatomic) HTSLiveImage hoverImage;
@property (nonatomic) BOOL hasHoverImage;
@property (nonatomic) HTSLiveImage checkedImage;
@property (nonatomic) BOOL hasCheckedImage;
+ (id)descriptor;
@end
