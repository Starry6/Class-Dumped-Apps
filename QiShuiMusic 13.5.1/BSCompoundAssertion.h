@interface BSCompoundAssertion : NSObject
@property (nonatomic) NSSet reasons;
@property (nonatomic) NSOrderedSet orderedReasons;
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) BOOL active;
@property (nonatomic) NSSet context;
@property (nonatomic) NSOrderedSet orderedContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)log;
- (id)context;
- (id)reasons;
- (void)setLog:;
- (id)acquireForReason:withContext:;
- (void).cxx_destruct;
- (id)orderedReasons;
- (id)description;
- (id)orderedContext;
- (id)acquireForReason:;
- (void)invalidate;
- (BOOL)isActive;
+ (id)new;
+ (id)assertionWithIdentifier:;
+ (id)assertionWithIdentifier:stateDidChangeHandler:;
@end
