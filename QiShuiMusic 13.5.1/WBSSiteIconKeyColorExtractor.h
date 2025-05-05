@interface WBSSiteIconKeyColorExtractor : NSObject
+ (id)keyColorForIcon:allowAllColors:confidence:nonTransparentConfidence:insets:;
+ (id)keyColorForIcon:;
+ (char *)_createRGBAPixelBufferFromImage:;
@end
