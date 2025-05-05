@interface IPAImageSizePolicy : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)transformSize:;
- (id)integralTransformSize:;
- (double)transformScaleForSize:;
- (BOOL)isBestFitPolicy;
- (BOOL)isOriginalSizePolicy;
+ (id)originalSizePolicy;
+ (id)scalePolicyWithScale:;
+ (id)bestFitPolicyInSize:;
+ (id)bestFitPolicyInSquare:;
+ (id)bestFitPolicyShortestEdge:;
+ (id)bestFitPolicyWithWidth:;
+ (id)bestFitPolicyWithHeight:;
+ (id)bestFitPolicyThumbnail;
+ (id)bestFitPolicyWithTotalPixelCount:;
+ (id)bestFitPolicyWithEvenTotalPixelCount:;
+ (id)bestFitPolicyWithEvenWidthTotalPixelCount:;
+ (id)largestPolicyWithPolicies:;
+ (id)bestFitPolicyWithNominalShortSide:minLongSide:maxLongSide:;
@end
