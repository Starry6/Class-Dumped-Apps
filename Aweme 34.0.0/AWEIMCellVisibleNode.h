@interface AWEIMCellVisibleNode : NSObject
@property (nonatomic) Q dataHash;
@property (nonatomic) {CGPoint=dd} contentOffset;
@property (nonatomic) {CGSize=dd} contentSize;
- (void)setContentOffset:;
- (void)setContentSize:;
- (id)contentOffset;
- (id)contentSize;
- (unsigned long long)dataHash;
- (void)setDataHash:;
@end
