@interface BDWebImageURLTransformInfo : NSObject
@property (nonatomic) NSURL currentTransformedURL;
@property (nonatomic) NSArray alternativeTransformedURLs;
- (id)alternativeTransformedURLs;
- (id)currentTransformedURL;
- (void)setAlternativeTransformedURLs:;
- (void)setCurrentTransformedURL:;
- (void).cxx_destruct;
@end
