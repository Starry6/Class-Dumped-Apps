@interface EFCancelationToken : EFInvocationToken
@property (nonatomic) BOOL canceled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCanceled;
- (void)cancel;
- (void)addCancelable:;
- (void)addCancelationBlock:;
- (void)removeAllCancelationBlocks;
+ (id)_descriptionString;
+ (id)tokenWithCancelationBlock:;
+ (id)tokenWithLabel:cancelationBlock:;
@end
