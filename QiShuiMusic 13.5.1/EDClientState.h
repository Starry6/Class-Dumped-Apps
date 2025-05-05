@interface EDClientState : NSObject
@property (nonatomic) BOOL isForeground;
@property (nonatomic) BOOL isRunningTests;
@property (nonatomic) NSArray visibleMailboxObjectIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsRunningTests:;
- (id)init;
- (BOOL)isRunningTests;
- (void)dealloc;
- (BOOL)isForeground;
- (void)setVisibleMailboxObjectIDs:;
- (void)setStateForDemoMode:;
- (id)visibleMailboxObjectIDs;
- (void)setIsForeground:;
- (id)giveBoostWithCompletionBlock:;
- (void).cxx_destruct;
+ (id)log;
+ (id)sharedInstance;
@end
