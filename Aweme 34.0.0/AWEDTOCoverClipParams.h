@interface AWEDTOCoverClipParams : MTLModel
@property (nonatomic) q previewCoverStartTimeInMilliseconds;
@property (nonatomic) BOOL previewCoverFromAlbum;
@property (nonatomic) NSString previewCoverOriginPath;
@property (nonatomic) q previewCoverOriginWidth;
@property (nonatomic) q previewCoverOriginHeight;
@property (nonatomic) q previewAspectRatio;
@property (nonatomic) NSString draftClipImageFilePath;
@property (nonatomic) q draftCoverWidth;
@property (nonatomic) q draftCoverHeight;
@property (nonatomic) NSArray previewMatrix;
@property (nonatomic) NSArray previewClipRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)previewCoverStartTimeInMilliseconds;
- (void)setPreviewCoverStartTimeInMilliseconds:;
- (BOOL)previewCoverFromAlbum;
- (void)setPreviewCoverFromAlbum:;
- (id)previewCoverOriginPath;
- (void)setPreviewCoverOriginPath:;
- (long long)previewCoverOriginWidth;
- (void)setPreviewCoverOriginWidth:;
- (long long)previewCoverOriginHeight;
- (void)setPreviewCoverOriginHeight:;
- (long long)previewAspectRatio;
- (void)setPreviewAspectRatio:;
- (id)draftClipImageFilePath;
- (void)setDraftClipImageFilePath:;
- (long long)draftCoverWidth;
- (void)setDraftCoverWidth:;
- (long long)draftCoverHeight;
- (void)setDraftCoverHeight:;
- (id)previewMatrix;
- (void)setPreviewMatrix:;
- (id)previewClipRect;
- (void)setPreviewClipRect:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
