@interface ISAsset : NSObject
@property (nonatomic) AVAsset videoAsset;
@property (nonatomic) ^{CGImage=} photo;
@property (nonatomic) double photoTime;
@property (nonatomic) {?=qiIq} photoCMTime;
@property (nonatomic) NSInteger photoEXIFOrientation;
@property (nonatomic) Q options;
@property (nonatomic) BOOL hasColorAdjustments;
- (id)init;
- (void)dealloc;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)description;
- (id)photo;
- (id)videoAsset;
- (double)photoTime;
- (id)initWithVideoAsset:UIImage:photoTime:photoEXIFOrientation:options:;
- (id)initWithVideoAsset:photo:photoTime:photoEXIFOrientation:;
- (id)photoCMTime;
- (id)initWithVideoAsset:photo:photoTime:options:;
- (id)initWithVideoAsset:photo:photoTime:;
- (id)initWithVideoAsset:photo:photoTime:photoEXIFOrientation:options:;
- (void)resetAVObjects;
- (BOOL)hasColorAdjustments;
- (int)photoEXIFOrientation;
+ (id)assetForURL:error:;
@end
