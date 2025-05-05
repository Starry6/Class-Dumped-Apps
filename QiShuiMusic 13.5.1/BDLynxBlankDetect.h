@interface BDLynxBlankDetect : NSObject
+ (void)calcValidAreaPercentageWithOriginalView:currentView:flag:elementCount:widthUnit:heightUnit:maxWidthUnitCount:maxHeightUnitCount:viewDic:validViewDic:hasValidElement:allowListBlcok:;
+ (BOOL)checkIfSingleViewIsValid:isValidElement:allowListBlcok:;
+ (void)checkLynxBlank:withAllowListBlock:result:;
+ (void)fillFlagWithRect:flag:widthUnit:heightUnit:maxWidthUnitCount:maxHeightUnitCount:;
+ (void)startBlankDetectWithModel:lynxView:;
+ (void)startCheckWithView:allowListBlcok:result:;
@end
