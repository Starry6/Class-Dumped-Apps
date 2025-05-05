@interface ImageFileLoader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageLoader;
- (id)cardLoader;
- (id)moreResultsLoader;
- (BOOL)canLoadImage:context:;
- (void)loadImage:context:completionHandler:;
- (id)urlForImage:context:;
@end
