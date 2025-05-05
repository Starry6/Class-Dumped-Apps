@interface RPTCoordinateSpaceConverter : NSObject
- (id)convertRect:;
- (id)convertVector:;
- (id)convertSize:;
- (id)convertPoint:;
+ (id)identityConverter;
+ (id)converterFromView:;
+ (id)converterFromWindow:;
+ (id)converterFromWindow:toScreen:;
@end
