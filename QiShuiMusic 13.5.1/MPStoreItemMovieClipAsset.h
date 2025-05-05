@interface MPStoreItemMovieClipAsset : NSObject
@property (nonatomic) NSDictionary lookupDictionary;
@property (nonatomic) double duration;
@property (nonatomic) NSString flavor;
@property (nonatomic) NSURL hlsURL;
@property (nonatomic) NSURL url;
- (id)url;
- (id)lookupDictionary;
- (void).cxx_destruct;
- (id)initWithLookupDictionary:;
- (id)flavor;
- (double)duration;
- (id)hlsURL;
@end
