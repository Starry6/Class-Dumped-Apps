@interface PLSubstandardPhotoEditSource : PLEditSource
- (id)initWithImage:orientation:;
- (id)initWithImage:orientation:size:;
+ (id)_imageWithImage:orientation:;
@end
