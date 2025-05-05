@interface HTSLiveTextPieceImage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) float scalingRate;
+ (id)descriptor;
@end
