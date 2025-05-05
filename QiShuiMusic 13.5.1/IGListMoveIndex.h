@interface IGListMoveIndex : NSObject
@property (nonatomic) q from;
@property (nonatomic) q to;
- (id)initWithFrom:to:;
- (unsigned long long)hash;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (long long)from;
- (long long)to;
@end
