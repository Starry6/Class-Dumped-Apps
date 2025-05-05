@interface IDSIDInfoOptions : NSObject
@property (nonatomic) BOOL allowRefresh;
@property (nonatomic) BOOL respectExpiry;
@property (nonatomic) BOOL waitForReply;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL bypassLimit;
- (id)init;
- (BOOL)forceRefresh;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)waitForReply;
- (void)setWaitForReply:;
- (id)initWithBypassLimit:allowRefresh:forceRefresh:respectExpiry:waitForReply:;
- (BOOL)allowRefresh;
- (void)setAllowRefresh:;
- (BOOL)respectExpiry;
- (void)setRespectExpiry:;
- (void)setForceRefresh:;
- (BOOL)bypassLimit;
- (void)setBypassLimit:;
+ (BOOL)supportsSecureCoding;
+ (id)currentIDInfo;
+ (id)refreshIDInfo;
+ (id)refreshIDInfoAndBypassLimit;
+ (id)sync_currentIDInfo;
+ (id)sync_refreshIDInfo;
@end
