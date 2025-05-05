@interface FRCFrameBurstyDropInfo : NSObject
@property (nonatomic) q burstyIdx;
@property (nonatomic) q burstyStart;
@property (nonatomic) q burstyLen;
@property (nonatomic) {?=qiIq} burstyBaseDuration;
- (long long)burstyIdx;
- (void)setBurstyIdx:;
- (long long)burstyStart;
- (void)setBurstyStart:;
- (long long)burstyLen;
- (void)setBurstyLen:;
- (id)burstyBaseDuration;
- (void)setBurstyBaseDuration:;
@end
