@interface UICalendarViewDecoration : NSObject
@property (nonatomic) UIView _decorationView;
- (id)init;
- (void).cxx_destruct;
- (id)_decorationViewReusableKey;
- (id)_decorationViewForReuseView:;
- (id)_decorationView;
- (void)_setDecorationView:;
- (id)initWithImage:color:size:;
- (id)initWithCustomViewProvider:;
- (id)initWithDecoration:;
+ (id)decorationWithColor:size:;
+ (id)decorationWithImage:;
+ (id)decorationWithImage:color:size:;
+ (id)decorationWithCustomViewProvider:;
+ (double)_referenceHeightForTraitCollection:;
@end
