@interface BDWebImageURLMetaInfo : NSObject
@property (nonatomic) NSURL currentURL;
@property (nonatomic) NSArray alternativeURLs;
@property (nonatomic) {CGSize=dd} viewSize;
- (id)init;
- (id)viewSize;
- (void).cxx_destruct;
- (void)setViewSize:;
- (id)alternativeURLs;
- (void)setAlternativeURLs:;
- (id)currentURL;
- (void)setCurrentURL:;
@end
