@interface VNGeometryUtils : NSObject
+ (id)boundingCircleForContour:error:;
+ (id)boundingCircleForPoints:error:;
+ (id)boundingCircleForSIMDPoints:pointCount:error:;
+ (BOOL)calculateArea:forContour:orientedArea:error:;
+ (BOOL)calculatePerimeter:forContour:error:;
@end
