@interface WBBrowserState : NSObject
@property (nonatomic) NSArray pinnedTabs;
@property (nonatomic) NSArray privatePinnedTabs;
@property (nonatomic) NSArray windows;
@property (nonatomic) NSArray windowStates;
- (id)windowStates;
- (id)windows;
- (id)privatePinnedTabs;
- (id)init;
- (id)pinnedTabs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setWindows:;
- (id)initWithPinnedTabs:privatePinnedTabs:windows:;
- (id)initWithPinnedTabs:privatePinnedTabs:windowStates:;
- (void)setPinnedTabs:;
- (void)setPrivatePinnedTabs:;
- (void)setWindowStates:;
+ (BOOL)supportsSecureCoding;
@end
