@interface CSJLiveAdCustomConfig : NSObject
@property (nonatomic) NSDictionary enterFromMergeMap;
@property (nonatomic) @? handler;
@property (nonatomic) @? tracker;
@property (nonatomic) @? invoker;
- (id)invoker;
- (id)enterFromMergeMap;
- (void)setEnterFromMergeMap:;
- (void)setInvoker:;
- (void)setTracker:;
- (id)tracker;
- (BOOL)isMemberOfClass:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
@end
