@interface AWESearchEntryHalfScreenElement : AWESearchEntryElement
@property (nonatomic) NSArray checkInDetailArray;
@property (nonatomic) NSArray homepageFeedAvoidList;
- (BOOL)enableBigMode;
- (BOOL)shouldShowSearchEntry;
- (void)willAnimation;
- (void)didAnimation;
- (id)customSchemaParams;
- (id)customSearchEnterFrom;
- (id)customExtraLogParams;
- (void)setCheckInDetailArray:;
- (void)setHomepageFeedAvoidList:;
- (BOOL)isInDetailVC;
- (id)checkInDetailArray;
- (id)homepageFeedAvoidList;
- (id)init;
- (void).cxx_destruct;
- (void)updateUI;
@end
