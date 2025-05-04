@interface AWEIMEmoticonStoreEntryComponent : AWEIMComponentBase
@property (nonatomic) UIView storeIconView;
@property (nonatomic) UIView storeEntryView;
@property (nonatomic) q firstTabType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshBackgroundColorWhileHasBackground:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)fixedStoreEntryClicked;
- (void)verticalAlignmentCenter:;
- (id)storeIconView;
- (void)setStoreIconView:;
- (id)storeEntryView;
- (void)setStoreEntryView:;
- (long long)firstTabType;
- (void)setFirstTabType:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
