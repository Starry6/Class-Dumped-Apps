@interface MPStoreItemOfferAsset : NSObject
@property (nonatomic) NSDictionary lookupDictionary;
@property (nonatomic) double duration;
@property (nonatomic) NSString flavor;
@property (nonatomic) double previewDuration;
@property (nonatomic) NSURL previewURL;
@property (nonatomic) q size;
- (id)lookupDictionary;
- (id)previewURL;
- (void).cxx_destruct;
- (id)initWithLookupDictionary:;
- (double)previewDuration;
- (id)flavor;
- (double)duration;
- (long long)size;
@end
