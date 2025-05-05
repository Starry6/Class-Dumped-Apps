@interface IESLiveKVOSubscription : NSObject
@property (nonatomic) NSObject weaktarget;
@property (nonatomic) NSObject unsafeTarget;
@property (nonatomic) NSObject observer;
@property (nonatomic) NSString keyPath;
@property (nonatomic) @? callback;
@property (nonatomic) BOOL disposed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTarget:observer:keyPath:options:callback:;
- (BOOL)isDisposed;
- (void)setDisposed:;
- (void)setWeaktarget:;
- (id)unsafeTarget;
- (id)weaktarget;
- (id)callback;
- (void)dispose;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)observer;
@end
