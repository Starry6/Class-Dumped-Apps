@interface HTSLivePicoInfo_VirtualLiveBgImages : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage originalImage;
@property (nonatomic) BOOL hasOriginalImage;
@property (nonatomic) NSString originalDigest;
@property (nonatomic) BOOL isUpright;
@property (nonatomic) NSMutableArray convertedImagesArray;
@property (nonatomic) Q convertedImagesArray_Count;
@property (nonatomic) NSMutableArray convertedListArray;
@property (nonatomic) Q convertedListArray_Count;
+ (id)descriptor;
@end
