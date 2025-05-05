@interface IESGifMetaData : NSObject
@property (nonatomic) q index;
@property (nonatomic) q srcPtsUs;
@property (nonatomic) q delayTimeUs;
- (void)setDelayTimeUs:;
- (long long)delayTimeUs;
- (void)setSrcPtsUs:;
- (long long)srcPtsUs;
- (long long)index;
- (void)setIndex:;
@end
