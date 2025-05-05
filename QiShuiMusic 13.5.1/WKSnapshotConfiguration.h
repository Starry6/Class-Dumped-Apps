@interface WKSnapshotConfiguration : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) NSNumber snapshotWidth;
@property (nonatomic) BOOL afterScreenUpdates;
- (id)rect;
- (id)init;
- (void)dealloc;
- (void)setRect:;
- (id)copyWithZone:;
- (id)snapshotWidth;
- (void)setSnapshotWidth:;
- (BOOL)afterScreenUpdates;
- (void)setAfterScreenUpdates:;
@end
