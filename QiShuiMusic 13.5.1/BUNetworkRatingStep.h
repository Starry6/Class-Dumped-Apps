@interface BUNetworkRatingStep : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString target;
@property (nonatomic) q count;
@property (nonatomic) q timeout;
- (void)setCount:;
- (void)setType:;
- (void)setTimeout:;
- (void)setTarget:;
- (long long)type;
- (void).cxx_destruct;
- (id)target;
- (long long)timeout;
- (long long)count;
@end
