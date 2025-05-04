@interface AWELongVideoPixel : NSObject
@property (nonatomic) C redValue;
@property (nonatomic) C greenValue;
@property (nonatomic) C blueValue;
- (id)initWithDataArray:startIndex:dataLength:;
- (unsigned char)blueValue;
- (void)setBlueValue:;
- (BOOL)isEqual:;
- (unsigned char)redValue;
- (void)setRedValue:;
- (void)setGreenValue:;
- (unsigned char)greenValue;
@end
