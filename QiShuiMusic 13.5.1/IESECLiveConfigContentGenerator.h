@interface IESECLiveConfigContentGenerator : NSObject
+ (id)checkContents:equalToContent:;
+ (id)configWithVibeContents:font:height:delegate:;
+ (id)generateAttributedStringWithText:textFont:textColor:;
+ (id)generateElementViewWithContent:font:delegate:;
+ (void)p_generateConstraintFor:lastView:baseView:;
+ (void)p_labelTextAdaptMaxWidth:superView:maxWidth:;
+ (void)updateElementViewConstraint:contents:font:delegate:;
@end
