@interface AWEEcomSearchBarViewDirector : NSObject
@property (nonatomic) Q ecomSearchBarType;
@property (nonatomic) AWEEcomSearchBarView barView;
@property (nonatomic) q uiThemeStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)moveToPage:fromPage:;
- (id)initWithBarView:;
- (void)setUiThemeStyle:;
- (void)setEcomSearchBarType:;
- (void)initStat:;
- (void)updateThemeForChange:;
- (void)privacyStateChanged:;
- (void)updateSearchBarType:;
- (void)updateShowMoreIconWithPage:;
- (unsigned long long)ecomSearchBarType;
- (long long)uiThemeStyle;
- (void).cxx_destruct;
- (id)barView;
- (void)setBarView:;
+ (id)liveBarViewDirector:;
+ (id)defaultBarViewDirector:;
@end
