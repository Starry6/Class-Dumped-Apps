@interface AWEGeneralCodeInsertObject : NSObject
@property (nonatomic) Q insertPosType;
@property (nonatomic) Q anchorType;
@property (nonatomic) NSString referString;
@property (nonatomic) UIViewController containerVC;
@property (nonatomic) UIView feedAnchorView;
@property (nonatomic) AWECommerceAnchorPublishModel publishAnchor;
@property (nonatomic) AWEAwemeModel aweme;
- (id)referString;
- (id)aweme;
- (void)setReferString:;
- (void)setAweme:;
- (void)setInsertPosType:;
- (void)setContainerVC:;
- (id)containerVC;
- (unsigned long long)insertPosType;
- (id)publishAnchor;
- (id)feedAnchorView;
- (void)setFeedAnchorView:;
- (void)setPublishAnchor:;
- (void).cxx_destruct;
- (unsigned long long)anchorType;
- (void)setAnchorType:;
@end
