@interface AWEPluginImageProcessImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getDominantColorsForImage:topLeftPoint:bottomRightPoint:maxColors:resultQty:limitedSize:;
+ (id)sharedPlugin;
@end
