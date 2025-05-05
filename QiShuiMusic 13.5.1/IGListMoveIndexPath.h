@interface IGListMoveIndexPath : NSObject
@property (nonatomic) NSIndexPath from;
@property (nonatomic) NSIndexPath to;
- (id)initWithFrom:to:;
- (unsigned long long)hash;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)from;
- (id)to;
@end
