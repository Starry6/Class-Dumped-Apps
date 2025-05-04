@interface AWEECLynxImageServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)canUseCustomImage:;
+ (id)getLynxImageElements;
+ (id)getImageFetcherWithSchema:;
@end
