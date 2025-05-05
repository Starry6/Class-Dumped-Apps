@interface IESECLiveGoodsListAnchorInfo : NSObject
@property (nonatomic) {CGPoint=dd} contentOffset;
@property (nonatomic) Q index;
@property (nonatomic) Q lastIndex;
@property (nonatomic) q beginRealIndex;
@property (nonatomic) q endRealIndex;
- (long long)beginRealIndex;
- (long long)endRealIndex;
- (void)setBeginRealIndex:;
- (void)setEndRealIndex:;
- (id)contentOffset;
- (void)setContentOffset:;
- (unsigned long long)index;
- (void)setIndex:;
- (unsigned long long)lastIndex;
- (void)setLastIndex:;
@end
