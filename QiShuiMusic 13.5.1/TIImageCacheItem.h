@interface TIImageCacheItem : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) C format;
@property (nonatomic) ^{CGColor=} formatColor;
@property (nonatomic) double scale;
@property (nonatomic) NSData data;
@property (nonatomic) @? dataReleaseHandler;
- (void)setFormat:;
- (void)_callDataReleaseHandler;
- (void)setDataReleaseHandler:;
- (void)dealloc;
- (unsigned char)format;
- (void)setScale:;
- (id)data;
- (void)setFormatColor:;
- (id)initWithCoder:;
- (id)dataReleaseHandler;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
- (double)scale;
- (void)setSize:;
- (id)formatColor;
- (id)size;
+ (BOOL)supportsSecureCoding;
+ (id)cacheItemWithSize:format:formatColor:scale:data:dataReleaseHandler:;
+ (id)cacheItemWithSize:format:formatColor:scale:data:;
@end
