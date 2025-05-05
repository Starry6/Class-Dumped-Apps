@interface IESLiveTextPieceImage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) IESLiveImageFormat imageFormat;
@property (nonatomic) BOOL hasImageFormat;
+ (id)descriptor;
@end
