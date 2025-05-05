@interface NACancelationToken : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCanceled;
- (id)init;
- (void)cancel;
- (id)nts_cancel;
- (void)addCancelable:;
- (void).cxx_destruct;
- (void)addCancelationBlock:;
- (void)callCancelationBlocks:;
+ (id)tokenWithCancelationBlock:;
+ (id)tokenWrappingCancelable:;
@end
