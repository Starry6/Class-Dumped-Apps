@interface LynxUnitUtils : NSObject
+ (double)clamp:min:max:;
+ (BOOL)isPercentage:;
+ (double)toPhysicalPixelFromPt:;
+ (double)toPtFromIDUnitValue:withDefaultPt:;
+ (double)toPtFromUnitValue:;
+ (double)toPtFromUnitValue:rootFontSize:curFontSize:rootWidth:rootHeight:;
+ (double)toPtFromUnitValue:rootFontSize:curFontSize:rootWidth:rootHeight:viewSize:withDefaultPt:;
+ (double)toPtFromUnitValue:rootFontSize:curFontSize:rootWidth:rootHeight:withDefaultPt:;
+ (double)toPtFromUnitValue:withDefaultPt:;
+ (double)toPtWithScreenMetrics:unitValue:rootFontSize:curFontSize:rootWidth:rootHeight:viewSize:withDefaultPt:;
+ (double)toPtWithScreenMetrics:unitValue:rootFontSize:curFontSize:rootWidth:rootHeight:withDefaultPt:;
@end
