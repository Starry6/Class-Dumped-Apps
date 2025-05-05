@interface TVLRenderingInfo : NSObject
@property (nonatomic) q streamType;
@property (nonatomic) q DTS;
@property (nonatomic) q PTS;
@property (nonatomic) Q pictureType;
- (long long)DTS;
- (long long)PTS;
- (void)setDTS:;
- (void)setPTS:;
- (void)setPictureType:;
- (unsigned long long)pictureType;
- (id)pictureTypeDescription;
- (id)streamTypeDescription;
- (id)init;
- (id)description;
- (long long)streamType;
- (void)setStreamType:;
+ (id)renderingInfoWithFrameInfo:error:;
@end
