@interface MPMediaLibraryArtwork : NSObject
@property (nonatomic) MPMediaLibraryArtworkRequest artworkRequest;
@property (nonatomic) ML3Artwork artwork;
@property (nonatomic) {os_unfair_lock_s=I} stateLock;
@property (nonatomic) NSArray validSizes;
@property (nonatomic) NSURL originalFileURL;
@property (nonatomic) NSDictionary effectsMetadata;
- (id)artwork;
- (id)init;
- (id)stateLock;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)setArtwork:;
- (BOOL)isEqual:;
- (id)artworkRequest;
- (void)setArtworkRequest:;
- (id)originalFileURL;
- (id)imageFileURLForSize:;
- (id)imageFileURLForEffect:;
- (id)validSizes;
- (id)effectsMetadata;
- (void)setEffectsMetadata:;
+ (BOOL)artworkExistsForRequest:;
+ (BOOL)needsToFetchArtworkForRequest:;
+ (id)availableArtworkWithRequest:;
+ (void)fetchArtworkForRequest:completionHandler:;
+ (void)cancelFetchingArtworkForRequest:;
+ (void)fetchArtworkInfoForRequest:completionHandler:;
@end
