@interface UISegmentLabel : UILabel
@property (nonatomic) UILabel associatedLabel;
- (void)setAssociatedLabel:;
- (id)init;
- (id)associatedLabel;
- (id)_disabledFontColor;
- (id)_associatedScalingLabel;
- (void).cxx_destruct;
- (id)_parentSegment;
- (BOOL)_shouldAnimatePropertyWithKey:;
@end
