@interface TLKArrangementItem : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSize:;
- (id)size;
- (float)contentHuggingPriorityForAxis:;
- (float)contentCompressionResistancePriorityForAxis:;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
@end
