@interface LPiTunesMediaAsset : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSDictionary colors;
@property (nonatomic) NSString name;
@property (nonatomic) LPFetcher fetcher;
- (id)colors;
- (id)fetcher;
- (id)metadata;
- (void).cxx_destruct;
- (id)name;
- (id)URL;
- (id)initWithImageURL:colors:name:;
- (id)initWithVideoURL:name:;
- (id)initWithName:lyricComponents:;
@end
