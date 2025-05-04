@interface AWESearchGeneralCachalotDoubleLayout : CachalotBaseLayout
@property (nonatomic) NSNumber customDivisionNumber;
- (id)generateContainerSizeWithContainerWidth:andLayoutOriginForChildrenLayoutModels:;
- (BOOL)isSameLayout:;
- (double)preferredChildLayoutWidthWithContainerWidth:;
- (double)p_widthWithContainerWidth:;
- (unsigned long long)p_divisionNumber;
- (id)customDivisionNumber;
- (void)setCustomDivisionNumber:;
- (double)p_interItemHorizontalSpacing;
- (double)p_interItemVerticalSpacing;
- (void).cxx_destruct;
@end
