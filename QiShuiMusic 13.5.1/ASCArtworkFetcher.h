@interface ASCArtworkFetcher : NSObject
@property (nonatomic) NSURLSession urlSession;
@property (nonatomic) double scale;
@property (nonatomic) ASCTaskCoordinator fetchCoordinator;
- (id)urlSession;
- (id)imageWithContentsOfURL:;
- (void).cxx_destruct;
- (id)dataWithContentsOfURL:;
- (double)scale;
- (id)initWithURLSession:scale:;
- (id)URLWithContentsOfArtwork:preferredSize:;
- (id)imageForContentsOfArtwork:withSize:;
- (id)fetchCoordinator;
+ (id)sharedFetcher;
@end
