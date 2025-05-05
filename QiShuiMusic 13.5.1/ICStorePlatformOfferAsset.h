@interface ICStorePlatformOfferAsset : NSObject
@property (nonatomic) double duration;
@property (nonatomic) double previewDuration;
@property (nonatomic) NSURL previewURL;
@property (nonatomic) q size;
- (id)initWithResponseDictionary:;
- (id)previewURL;
- (void).cxx_destruct;
- (double)previewDuration;
- (double)duration;
- (long long)size;
@end
