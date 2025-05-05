@interface HTSLiveEpisodePreviewImage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage previewUriUp;
@property (nonatomic) BOOL hasPreviewUriUp;
@property (nonatomic) HTSLiveImage previewUriDown;
@property (nonatomic) BOOL hasPreviewUriDown;
@property (nonatomic) NSInteger previewType;
@property (nonatomic) NSString previewWordUp;
@property (nonatomic) NSString previewWordDown;
+ (id)descriptor;
@end
