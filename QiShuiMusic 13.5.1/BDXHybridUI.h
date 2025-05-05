@interface BDXHybridUI : NSObject
@property (nonatomic) <BDXHybridUIEventDispatcher> eventDispatcher;
@property (nonatomic) <BDXHybridUIContext> context;
- (void)layoutDidFinished;
- (void)updateAttribute:value:requestReset:;
- (id)context;
- (id)view;
- (void).cxx_destruct;
- (void)setContext:;
- (id)createView;
- (id)eventDispatcher;
- (void)setEventDispatcher:;
+ (id)tagName;
@end
