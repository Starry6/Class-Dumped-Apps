@interface MKPhotoBigAttributionView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIActivityIndicatorView spinner;
@property (nonatomic) q context;
@property (nonatomic) q type;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapItem;
- (void)updateBackgroundIfNeeded;
- (id)contentView;
- (long long)context;
- (void)layoutSubviews;
- (void)setType:;
- (void)setMapItem:;
- (id)spinner;
- (long long)type;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)didUpdateMapItem;
- (void)didUpdateAttributionViewType;
- (void)willStartAnimatingActivityIndicatorView;
- (void)didEndAnimatingActivityIndicatorView;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:;
+ (id)bigAttributionViewForMapItem:attributionType:isFirstParty:context:;
@end
