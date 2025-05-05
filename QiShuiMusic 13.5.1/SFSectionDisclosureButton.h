@interface SFSectionDisclosureButton : UIButton
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL labelHidden;
@property (nonatomic) UIImageView chevron;
@property (nonatomic) {CGSize=dd} sizeIncludingLabels;
- (BOOL)isExpanded;
- (void)dealloc;
- (void)setExpanded:;
- (BOOL)isLabelHidden;
- (void)setLabelHidden:;
- (void).cxx_destruct;
- (id)chevron;
- (void)toggleExpanded;
- (void)buttonShapesEnabledDidChange;
- (id)initWithFrame:expanded:modally:;
- (void)updateExpanded;
- (id)sizeIncludingLabels;
@end
