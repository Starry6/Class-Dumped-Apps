@interface CKDCancelToken : NSObject
@property (nonatomic) @? cancelAction;
- (void)cancel;
- (BOOL)isCancelled;
- (id)cancelAction;
- (void)setCancelAction:;
- (void).cxx_destruct;
@end
