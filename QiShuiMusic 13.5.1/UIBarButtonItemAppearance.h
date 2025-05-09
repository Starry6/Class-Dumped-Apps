@interface UIBarButtonItemAppearance : NSObject
@property (nonatomic) _UIBarButtonItemData _data;
@property (nonatomic) <_UIBarButtonItemAppearanceChangeObserver> _changeObserver;
@property (nonatomic) <_UIBarButtonItemDataFallback> _fallback;
@property (nonatomic) UIBarButtonItemStateAppearance normal;
@property (nonatomic) UIBarButtonItemStateAppearance highlighted;
@property (nonatomic) UIBarButtonItemStateAppearance disabled;
@property (nonatomic) UIBarButtonItemStateAppearance focused;
- (id)init;
- (void)_updateDataTo:signal:;
- (void)_describeInto:;
- (void)dealloc;
- (id)_changeObserver;
- (id)copy;
- (void)_resetBackIndicatorImages;
- (void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:;
- (void)_setFallback:;
- (void)_setChangeObserver:;
- (id)initWithCoder:;
- (id)disabled;
- (id)_fallback;
- (unsigned long long)hash;
- (void)_setData:;
- (id)_data;
- (id)highlighted;
- (void)encodeWithCoder:;
- (id)_proxyForState:;
- (void)_setBackIndicatorImage:transitionMaskImage:;
- (id)normal;
- (void)configureWithDefaultForStyle:;
- (void).cxx_destruct;
- (id)focused;
- (id)description;
- (id)initWithStyle:;
- (BOOL)isEqual:;
- (id)initWithBarButtonItemAppearance:;
- (id)copyWithZone:;
- (void)_writeToStorage:;
+ (BOOL)supportsSecureCoding;
@end
