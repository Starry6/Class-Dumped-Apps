@interface UISceneSizeRestrictions : NSObject
@property (nonatomic) {CGSize=dd} minimumSize;
@property (nonatomic) {CGSize=dd} maximumSize;
@property (nonatomic) BOOL allowsFullScreen;
- (void)setMinimumSize:;
- (id)_initWithScene:;
- (void)setMaximumSize:;
- (id)minimumSize;
- (void).cxx_destruct;
- (id)maximumSize;
- (BOOL)allowsFullScreen;
- (void)setAllowsFullScreen:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
