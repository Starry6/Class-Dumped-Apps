@interface AAFImage : NSObject
+ (id)circularImageData:withDiameter:;
+ (id)circularImageData:withDiameter:crop:;
+ (id)circularImage:withDiameter:crop:;
+ (id)tranformedRectForImageSize:withDiameter:crop:;
@end
