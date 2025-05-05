@interface MKVKImageSourceKeyImageBuilder : NSObject
+ (id)calculateImagesForParameters:;
+ (void)_recursivelyGetImages:accumulator:;
@end
