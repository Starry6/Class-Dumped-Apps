@interface IESECGoodsDetailNavBarContainer : UIView
@property (nonatomic) UIView pdpSlcView;
@property (nonatomic) IESECGoodsCommentHeader commentHeader;
@property (nonatomic) double pdpNavHeight;
@property (nonatomic) double commentNavHeight;
@property (nonatomic) <IESECPDPNavBarContainerDelegate><IESECGoodsCommentHeaderActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)alphaOfPoint:;
- (double)alphaOfPointFromLayer:;
- (id)commentHeader;
- (double)commentNavHeight;
- (double)pdpNavHeight;
- (id)pdpSlcView;
- (void)setCommentHeader:;
- (void)setCommentNavHeight:;
- (void)setPdpNavHeight:;
- (void)setPdpSlcView:;
- (void)setupCommentHeader;
- (void)setupHeader;
- (void)showHeader:;
- (BOOL)pointInside:withEvent:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
