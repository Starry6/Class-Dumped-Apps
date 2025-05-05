@interface RPBroadcastConfiguration : NSObject
@property (nonatomic) double clipDuration;
@property (nonatomic) NSDictionary videoCompressionProperties;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)videoCompressionProperties;
- (double)clipDuration;
- (void)setClipDuration:;
- (void)setVideoCompressionProperties:;
+ (BOOL)supportsSecureCoding;
@end
