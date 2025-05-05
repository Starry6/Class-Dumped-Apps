@interface HTSLiveAppearance : IESLivePBBaseMessage
@property (nonatomic) q upRightStatsDisplayType;
@property (nonatomic) NSMutableArray toolbarListArray;
@property (nonatomic) Q toolbarListArray_Count;
@property (nonatomic) HTSLiveImage horizontalBackground;
@property (nonatomic) BOOL hasHorizontalBackground;
@property (nonatomic) NSMutableArray wideCoverListArray;
@property (nonatomic) Q wideCoverListArray_Count;
@property (nonatomic) HTSLiveMoreEntrance entrance;
@property (nonatomic) BOOL hasEntrance;
@property (nonatomic) q previewStyle;
@property (nonatomic) HTSLiveImage coverGauss;
@property (nonatomic) BOOL hasCoverGauss;
@property (nonatomic) NSMutableArray contentTagsArray;
@property (nonatomic) Q contentTagsArray_Count;
@property (nonatomic) HTSLivePreviewLabel previewLabel;
@property (nonatomic) BOOL hasPreviewLabel;
@property (nonatomic) HTSLiveImage coverDynamicMask;
@property (nonatomic) BOOL hasCoverDynamicMask;
@property (nonatomic) HTSLiveAppearance_Bubble headBubble;
@property (nonatomic) BOOL hasHeadBubble;
@property (nonatomic) HTSLiveImage blurPlaceholderImg;
@property (nonatomic) BOOL hasBlurPlaceholderImg;
+ (id)descriptor;
@end
