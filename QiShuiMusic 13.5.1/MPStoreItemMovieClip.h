@interface MPStoreItemMovieClip : NSObject
@property (nonatomic) NSDictionary lookupDictionary;
@property (nonatomic) NSArray assets;
@property (nonatomic) MPStoreArtworkRequestToken previewArtworkRequestToken;
@property (nonatomic) NSString title;
- (id)assets;
- (id)lookupDictionary;
- (id)title;
- (void).cxx_destruct;
- (id)initWithLookupDictionary:;
- (id)previewArtworkRequestToken;
@end
