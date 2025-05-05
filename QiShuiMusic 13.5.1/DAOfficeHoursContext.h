@interface DAOfficeHoursContext : NSObject
@property (nonatomic) BOOL isFetch;
@property (nonatomic) NSString accountID;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? fetchCompletionBlock;
@property (nonatomic) @? setCompletionBlock;
- (void)setFetchCompletionBlock:;
- (id)accountID;
- (void)setAccountID:;
- (void)abortWithError:;
- (id)fetchCompletionBlock;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (BOOL)isFetch;
- (void)finishFetchWithOfficeHours:error:;
- (void)finishSetWithError:;
- (id)setCompletionBlock;
- (void)setSetCompletionBlock:;
@end
