@interface CPInterval : NSObject
- (void)add:;
- (double)left;
- (BOOL)intersects:;
- (double)right;
- (BOOL)contains:;
- (id)initLeft:right:;
@end
