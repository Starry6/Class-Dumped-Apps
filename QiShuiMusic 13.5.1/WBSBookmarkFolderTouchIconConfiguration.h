@interface WBSBookmarkFolderTouchIconConfiguration : NSObject
@property (nonatomic) Q maximumNumberOfThumbnailsPerRow;
@property (nonatomic) Q maximumNumberOfThumbnailRows;
@property (nonatomic) Q maximumNumberOfThumbnailIcons;
@property (nonatomic) double thumbnailIconScaleFactor;
@property (nonatomic) double thumbnailIconOuterMarginScaleFactor;
@property (nonatomic) double thumbnailIconInnerMarginScaleFactor;
@property (nonatomic) {CGSize=dd} shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (nonatomic) BOOL fillIconWithBackgroundColor;
@property (nonatomic) UIColor backgroundColorForEmptySlots;
@property (nonatomic) UIColor colorForDarkeningThumbnailBackground;
- (BOOL)fillIconWithBackgroundColor;
- (id)initFor3x3Layout;
- (id)colorForDarkeningThumbnailBackground;
- (id)shadowOffset;
- (unsigned long long)maximumNumberOfThumbnailIcons;
- (id)initFor2x2Layout;
- (double)shadowBlurRadius;
- (unsigned long long)maximumNumberOfThumbnailRows;
- (double)thumbnailIconScaleFactor;
- (void)_commonWBSBookmarkFolderIconConfigurationInit;
- (double)thumbnailIconInnerMarginScaleFactor;
- (void).cxx_destruct;
- (id)initForTabGroup;
- (double)thumbnailIconOuterMarginScaleFactor;
- (id)backgroundColorForEmptySlots;
- (unsigned long long)maximumNumberOfThumbnailsPerRow;
@end
