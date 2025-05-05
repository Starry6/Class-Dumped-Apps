@interface RxDeferred : NSObject
@property (nonatomic) @? cancelledBlock;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) RxPromise promise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cancelledBlock;
- (void)rejectWithError:scheduler:;
- (void)resolveWithValue:scheduler:;
- (void)setCancelledBlock:;
- (void)whenCancelled:;
- (BOOL)cancelled;
- (void)setCancelled:;
- (id)init;
- (void)cancel;
- (id)initWithScheduler:;
- (void)resolveWithValue:;
- (id)promise;
- (void).cxx_destruct;
- (id)description;
- (void)rejectWithError:;
- (void)fullfillWithValue:;
+ (id)deferWithScheduler:;
+ (id)defer;
@end
