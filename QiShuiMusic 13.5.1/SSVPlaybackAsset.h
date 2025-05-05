@interface SSVPlaybackAsset : NSObject
@property (nonatomic) NSDictionary assetDictionary;
@property (nonatomic) NSString downloadKey;
@property (nonatomic) NSString flavor;
@property (nonatomic) NSString URLString;
@property (nonatomic) NSArray sinfs;
- (id)URLString;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)flavor;
- (BOOL)isEqual:;
- (id)assetDictionary;
- (id)downloadKey;
- (id)sinfs;
- (id)initWithAssetDictionary:;
@end
