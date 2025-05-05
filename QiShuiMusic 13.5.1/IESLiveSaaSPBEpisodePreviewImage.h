@interface IESLiveSaaSPBEpisodePreviewImage : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage previewUriUp;
@property (nonatomic) BOOL hasPreviewUriUp;
@property (nonatomic) IESLiveSaaSPBImage previewUriDown;
@property (nonatomic) BOOL hasPreviewUriDown;
@property (nonatomic) NSInteger previewType;
@property (nonatomic) NSString previewWordUp;
@property (nonatomic) NSString previewWordDown;
+ (id)descriptor;
@end
