@interface AWEIMInputActionBarMaker_NormalGroupOrPrivate : NSObject
@property (nonatomic) UIView<AWEIMInputActionBarProtocol> actionBar;
@property (nonatomic) Q type;
@property (nonatomic) NSArray calculatedItems;
@property (nonatomic) NSString typeString;
@property (nonatomic) UIView blurContentView;
@property (nonatomic) <AWEIMInputActionBarMakerDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)iPadAdapterEnabled;
- (double)actionBarHeight;
- (id)actionBar;
- (void)setActionBar:;
- (id)blurContentView;
- (void)setBlurContentView:;
- (id)resolvedConfig;
- (id)calculatedItems;
- (id)makeActionBar;
- (void)setActionBarToNil;
- (id)recalculateEntryItems;
- (BOOL)entryItemContainReplacedSpecialEmoji;
- (id)p_insertLightInteractionItemIfNeededInItems:;
- (void)setCalculatedItems:;
- (unsigned long long)type;
- (void)setType:;
- (unsigned long long)uiStyle;
- (void).cxx_destruct;
- (id)initWithType:;
- (void)setDataSource:;
- (id)typeString;
- (id)dataSource;
- (id)conversation;
@end
