@interface MFDADeferredMessageMoveOperation : _MFOfflineCacheOperation
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:;
+ (id)log;
+ (BOOL)supportsSecureCoding;
@end
