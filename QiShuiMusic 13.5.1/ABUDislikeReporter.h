@interface ABUDislikeReporter : NSObject
@property (nonatomic) NSArray reasons;
@property (nonatomic) ABUAdPackage adPackage;
@property (nonatomic) UIView<ABUDislikeAdView> view;
- (id)initWithDrawAd:;
- (void)_didUpdateReasonWithID:withSelected:;
- (void)_fetchReasons;
- (id)_findReasonWithID:;
- (id)adPackage;
- (void)didSelectedReasonWithID:;
- (void)didUnselectedReasonWithID:;
- (id)drawAdapter;
- (id)initWithNativeAd:;
- (id)nativeAdapter;
- (void)setAdPackage:;
- (id)init;
- (BOOL)isMemberOfClass:;
- (id)reasons;
- (id)view;
- (void)submit;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)setView:;
- (void)setReasons:;
@end
