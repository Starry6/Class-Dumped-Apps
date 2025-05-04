@interface AWERecycledWorksPrivatePostViewModel : NSObject
@property (nonatomic) NSMutableArray recycledWorksMut;
@property (nonatomic) q totalCount;
@property (nonatomic) NSArray recycledWorksList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recycledWorksList;
- (void)fetchRecycledWorksListWithCompletion:;
- (void)updateCurrAweme:;
- (void)updateTotalCount:;
- (void)trackViewEventStatus:error:duration:;
- (id)recycledWorksMut;
- (void)resetRecycledWorksListEmpty;
- (void)setRecycledWorksMut:;
- (id)init;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
@end
