@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:;
- (id)initWithMessageIDHeader:mailbox:;
+ (id)log;
+ (BOOL)supportsSecureCoding;
@end
