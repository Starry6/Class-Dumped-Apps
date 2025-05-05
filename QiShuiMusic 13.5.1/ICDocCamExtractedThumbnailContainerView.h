@interface ICDocCamExtractedThumbnailContainerView : UIView
@property (nonatomic) <ICDocCamExtractedThumbnailContainerViewDelegate> delegate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setDelegate:;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (id)delegate;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (BOOL)orderNextForAccessibility:;
- (BOOL)orderPreviousForAccessibility:;
@end
