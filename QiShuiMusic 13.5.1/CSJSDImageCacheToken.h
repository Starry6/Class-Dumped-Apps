@interface CSJSDImageCacheToken : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) @? doneBlock;
@property (nonatomic) CSJSDCallbackQueue callbackQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)doneBlock;
- (id)initWithDoneBlock:;
- (void)setDoneBlock:;
- (void)setCancelled:;
- (void)cancel;
- (BOOL)isCancelled;
- (id)key;
- (void)setCallbackQueue:;
- (id)callbackQueue;
- (void)setKey:;
- (void).cxx_destruct;
@end
