@interface AWEMultiTabManager : NSObject
@property (nonatomic) <AWEMultiTabManagerDelegate> delegate;
@property (nonatomic) AWEHPHomepageRootManager rootManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSegmentItemViewFullyPresentWithIndex:;
- (void)segementedControlScrollBackToSelected;
- (long long)feedTabViewControllerCount;
- (id)rootManager;
- (id)init;
- (id)delegate;
- (void)setup;
- (long long)indexForTab:;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)setDelegate:;
+ (id)sharedInstance;
@end
