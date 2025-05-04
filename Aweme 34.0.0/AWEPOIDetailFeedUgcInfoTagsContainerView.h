@interface AWEPOIDetailFeedUgcInfoTagsContainerView : UIView
@property (nonatomic) <AWEPOIUgcUIModuleHostProtocol> delegate;
@property (nonatomic) NSDictionary clickRouterParams;
- (void)setClickRouterParams:;
- (void)updateWithTagsArray:itemSpacing:splitType:;
- (id)clickRouterParams;
- (id)createTagViewWithModel:;
- (id)createSplitLine;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (double)heightWithTagsArray:;
@end
