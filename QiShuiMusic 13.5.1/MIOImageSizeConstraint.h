@interface MIOImageSizeConstraint : NSObject
@property (nonatomic) q type;
@property (nonatomic) {_MIORange=qq} pixelsWideRange;
@property (nonatomic) {_MIORange=qq} pixelsHighRange;
@property (nonatomic) NSArray enumeratedImageSizes;
- (id)init;
- (unsigned long long)hash;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecification:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)enumeratedImageSizes;
- (id)initWithPixelsWideRange:pixelsHighRange:;
- (id)initWithEnumeratedImageSizes:;
- (id)pixelsWideRange;
- (id)pixelsHighRange;
- (BOOL)allowsImageSize:;
@end
