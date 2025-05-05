@interface AMSMediaArtwork : NSObject
@property (nonatomic) NSDictionary artworkDictionary;
@property (nonatomic) {CGSize=dd} artworkSize;
- (id)URLString;
- (id)initWithDictionary:;
- (double)height;
- (double)width;
- (void).cxx_destruct;
- (id)URLWithSize:cropStyle:format:;
- (id)colorWithKind:;
- (id)artworkDictionary;
- (id)artworkSize;
- (id)URLWithSize:;
- (id)URLWithSize:cropStyle:format:quality:;
- (unsigned long long)_qualityForFormat:;
@end
