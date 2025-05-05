@interface IAVDSnapshotViewConfiguration : NSObject
@property (nonatomic) float zSpacing;
@property (nonatomic) float minimumZSpacing;
@property (nonatomic) float maximumZSpacing;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor highlightColor;
@property (nonatomic) IAVDSnapshotViewHeaderAttributes normalHeaderAttributes;
@property (nonatomic) IAVDSnapshotViewHeaderAttributes importantHeaderAttributes;
@property (nonatomic) UIFont descriptionFont;
- (float)maximumZSpacing;
- (float)minimumZSpacing;
- (id)importantHeaderAttributes;
- (id)normalHeaderAttributes;
- (void)setImportantHeaderAttributes:;
- (void)setMaximumZSpacing:;
- (void)setMinimumZSpacing:;
- (void)setNormalHeaderAttributes:;
- (void)setZSpacing:;
- (float)zSpacing;
- (void)setHighlightColor:;
- (id)init;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)highlightColor;
- (void).cxx_destruct;
- (id)descriptionFont;
- (void)setDescriptionFont:;
@end
