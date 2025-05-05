@interface QLThumbnailDescriptor : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double scaleFactor;
- (double)scaleFactor;
- (void)setScaleFactor:;
- (void)setSize:;
- (id)size;
+ (id)descriptorWithSize:scaleFactor:;
@end
