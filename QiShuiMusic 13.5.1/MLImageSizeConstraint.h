@interface MLImageSizeConstraint : NSObject
@property (nonatomic) NSOrderedSet imageSizeSet;
@property (nonatomic) q type;
@property (nonatomic) {_NSRange=QQ} pixelsWideRange;
@property (nonatomic) {_NSRange=QQ} pixelsHighRange;
@property (nonatomic) NSArray enumeratedImageSizes;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)initUnspecified;
- (id)enumeratedImageSizes;
- (id)initWithPixelsWideRange:pixelsHighRange:;
- (id)initWithEnumeratedImageSizes:;
- (BOOL)isAllowedImageSize:error:;
- (id)pixelsWideRange;
- (id)pixelsHighRange;
- (id)imageSizeSet;
- (id)allowedImageSizeClosestToPixelsWide:pixelsHigh:preferDownScaling:preferInputAspectRatio:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)locationClosestTo:inRange:;
+ (id)closestImageSizeInPixelsWideRange:pixelsHighRange:toImageSize:preferInputAspectRatio:;
+ (id)closestImageSizeInArray:toImageSize:preferDownScaling:;
@end
