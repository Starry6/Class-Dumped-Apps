@interface AWEListMoveIndex : NSObject
@property (nonatomic) q from;
@property (nonatomic) q to;
- (id)initWithFrom:to:;
- (void)setFrom:;
- (long long)from;
- (void)setTo:;
- (long long)to;
@end
