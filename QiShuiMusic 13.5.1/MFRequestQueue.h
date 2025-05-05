@interface MFRequestQueue : NSObject
@property (nonatomic) NSMutableArray requestPairs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)signpostID;
- (BOOL)addRequest:;
- (void).cxx_destruct;
- (BOOL)processRequests:;
- (BOOL)addRequests:;
- (BOOL)addRequests:combine:;
- (BOOL)sendRequests:;
- (BOOL)processRequest:;
- (BOOL)_processRequests:;
- (id)requestPairs;
- (void)setRequestPairs:;
+ (id)log;
+ (id)signpostLog;
@end
