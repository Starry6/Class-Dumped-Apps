@interface AWEAudioClipRangeChangeResultModel : NSObject
@property (nonatomic) {_HTSAudioRange=dd} range;
@property (nonatomic) q changeType;
@property (nonatomic) q repeatCount;
- (id)range;
- (void)setRange:;
- (void)setChangeType:;
- (long long)changeType;
- (void)setRepeatCount:;
- (long long)repeatCount;
@end
