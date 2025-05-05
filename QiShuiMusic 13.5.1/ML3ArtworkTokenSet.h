@interface ML3ArtworkTokenSet : NSObject
@property (nonatomic) double retrievalTime;
@property (nonatomic) NSString availableArtworkToken;
@property (nonatomic) NSString fetchableArtworkToken;
@property (nonatomic) q fetchableArtworkSourceType;
- (void).cxx_destruct;
- (id)availableArtworkToken;
- (id)fetchableArtworkToken;
- (double)retrievalTime;
- (void)setRetrievalTime:;
- (id)initWithEntity:artworkType:;
- (long long)fetchableArtworkSourceType;
- (id)artworkTokenForSource:;
- (void)_faultInBestTokens;
- (void)_faultInTokens;
@end
