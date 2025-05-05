@interface CPLResetTracker : NSObject
@property (nonatomic) NSArray resetReasons;
@property (nonatomic) NSDate earliestReasonDate;
@property (nonatomic) NSDate likelyResetDate;
@property (nonatomic) BOOL hasReasons;
- (id)initWithCoder:;
- (id)earliestReasonDate;
- (id)likelyResetDate;
- (void)encodeWithCoder:;
- (id)likelyResetReasonWithImmediateReason:;
- (void).cxx_destruct;
- (id)initWithResetReasons:;
- (id)resetReasons;
- (BOOL)hasReasons;
+ (void)discardTracker:;
+ (BOOL)supportsSecureCoding;
+ (void)_storeReasonsLocked;
+ (void)registerLikelyResetReason:arguments:;
+ (void)_registerReasonLocked:;
+ (id)currentTracker;
+ (BOOL)shouldIgnoreDefaultsCPLKey:;
+ (id)currentReasonDescriptions;
+ (void)registerLikelyResetReason:;
+ (void)discardTentativeResetReason:;
+ (id)registerTentativeResetReasonIfCrashing:;
@end
