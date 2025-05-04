@interface AWETransformerLayoutEngine : NSObject
+ (void)calculateLayoutWithStrategy:container:completion:;
+ (double)calculateAdaptiveContainerWidthByStrategy:;
+ (double)calculateAdaptiveContainerHeightByStrategy:;
@end
