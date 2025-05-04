@interface AWEAdColorLabUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)convertRGBToLABWithColor:;
+ (id)imageFromCVPixelBufferRef:;
+ (double)deltaColorOfCIEDE2000BetweenColor1:color2:;
+ (double)deltaColorOfCIEDE2000BetweenLab1:lab2:;
+ (double)weightedAverageBrightnessWithColor:;
+ (id)colorFromCVPixelBufferRef:startY:endY:;
@end
