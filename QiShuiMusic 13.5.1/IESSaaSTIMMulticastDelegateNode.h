@interface IESSaaSTIMMulticastDelegateNode : NSObject
@property (nonatomic) @ delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL sync;
- (BOOL)sync;
- (void)setPriority:;
- (void)setDelegate:;
- (id)key;
- (void)setKey:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)setSync:;
- (int)priority;
@end
