@interface ISPlayerContent : NSObject
@property (nonatomic) ^{CGImage=} photo;
@property (nonatomic) NSInteger photoEXIFOrientation;
@property (nonatomic) {?=qiIq} photoTime;
@property (nonatomic) {?=qiIq} videoDuration;
@property (nonatomic) AVPlayerItem videoPlayerItem;
@property (nonatomic) BOOL photoHasColorAdjustments;
@property (nonatomic) BOOL photoIsOriginal;
@property (nonatomic) BOOL supportsVitality;
@property (nonatomic) NSNumber variationIdentifier;
- (void)dealloc;
- (unsigned long long)hash;
- (id)videoDuration;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)photo;
- (id)photoTime;
- (id)videoPlayerItem;
- (id)variationIdentifier;
- (int)photoEXIFOrientation;
- (id)initWithPhoto:photoIsOriginal:photoEXIFOrientation:photoTime:videoDuration:photoHasColorAdjustments:videoPlayerItem:variationIdentifier:supportsVitality:;
- (BOOL)photoHasColorAdjustments;
- (BOOL)photoIsOriginal;
- (BOOL)supportsVitality;
@end
