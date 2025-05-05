@interface IESECListKitListMoveIndex : NSObject
@property (nonatomic) q from;
@property (nonatomic) q to;
- (id)initWithFrom:to:;
- (long long)from;
- (void)setFrom:;
- (long long)to;
- (void)setTo:;
@end
