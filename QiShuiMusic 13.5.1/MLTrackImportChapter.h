@interface MLTrackImportChapter : NSObject
@property (nonatomic) NSData imageData;
@property (nonatomic) NSString imageCacheKey;
@property (nonatomic) Q startTimeInMilliseconds;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString URLTitle;
- (void)setImageData:;
- (id)imageData;
- (void)setTitle:;
- (id)title;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (void)normalizeProperties;
- (BOOL)isEqualIgnoringTimesAndTitle:;
- (unsigned long long)startTimeInMilliseconds;
- (void)setStartTimeInMilliseconds:;
- (id)URLTitle;
- (void)setURLTitle:;
- (id)imageCacheKey;
- (void)setImageCacheKey:;
@end
