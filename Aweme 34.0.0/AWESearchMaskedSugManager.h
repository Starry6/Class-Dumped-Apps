@interface AWESearchMaskedSugManager : NSObject
@property (nonatomic) NSString currentSessionID;
@property (nonatomic) NSMutableArray maskedSugs;
@property (nonatomic) BOOL executedSearch;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString gid;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)executedSearch;
- (void)trackMaskedSugClickWithSearchID:keyword:;
- (void)setExecutedSearch:;
- (id)maskedSugs;
- (void)updateMaskedSugs:sessionID:imprID:;
- (void)trackMaskedSugClick;
- (void)setMaskedSugs:;
- (id)init;
- (id)gid;
- (void)setGid:;
- (void).cxx_destruct;
- (void)reset;
- (id)currentSessionID;
- (void)setCurrentSessionID:;
+ (id)sharedManager;
@end
