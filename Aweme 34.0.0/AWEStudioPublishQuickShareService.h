@interface AWEStudioPublishQuickShareService : HTSService
@property (nonatomic) NSMutableDictionary quickShareCreationIds;
@property (nonatomic) q feedType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (BOOL)isInMainFeedTab;
- (long long)getFeedType;
- (void)resetFeedType;
- (BOOL)isValidFeedType;
- (BOOL)isExistEditingQuickShare;
- (void)creationID:didEnterEditPage:;
- (void)setQuickShareCreationIds:;
- (id)quickShareCreationIds;
- (void)clearEditingQuickShare;
- (long long)feedType;
- (void)setFeedType:;
- (void).cxx_destruct;
@end
