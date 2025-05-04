@interface AWEIMEnterMessageTabComboRequestManager : AWEIMComponentBase
@property (nonatomic) NSMutableDictionary businessDict;
@property (nonatomic) double limitedUntilTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)businessDict;
- (void)setBusinessDict:;
- (void)onTabBarDidChangeNotification:;
- (void)registerBusinessRequestHandler:;
- (void)doComboRequestIfNecessaryWithFrequencyControl:;
- (double)limitedUntilTime;
- (void)setLimitedUntilTime:;
- (void)doComboRequestWithFrequencyControl:;
- (void)onApplicationDidBecomeActiveNotification;
- (void).cxx_destruct;
- (void)addObservers;
- (id)requestParams;
@end
