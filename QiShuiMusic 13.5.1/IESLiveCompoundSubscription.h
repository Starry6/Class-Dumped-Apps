@interface IESLiveCompoundSubscription : NSObject
@property (nonatomic) NSMutableArray allSubscription;
@property (nonatomic) NSMutableArray allRootSubscription;
@property (nonatomic) BOOL disposed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allSubscription;
- (void)addRootSubscription:;
- (void)addSubscription:;
- (id)allRootSubscription;
- (BOOL)isDisposed;
- (void)removeSubscription:;
- (void)setAllRootSubscription:;
- (void)setAllSubscription:;
- (void)setDisposed:;
- (id)init;
- (void)dispose;
- (void).cxx_destruct;
+ (id)compoundDisposable;
@end
