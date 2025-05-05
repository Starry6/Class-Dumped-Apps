@interface HTSLivePicoInfo_VirtualLiveBgImages_ConvertedImage : IESLivePBBaseMessage
@property (nonatomic) q quality;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString digest;
+ (id)descriptor;
@end
