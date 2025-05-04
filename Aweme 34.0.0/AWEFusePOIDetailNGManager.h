@interface AWEFusePOIDetailNGManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isShowPOIDetailInModalView;
- (void)dismissNGDetailViewController:;
- (void)popupPOIDetailNGWithTransitionInfo:;
@end
