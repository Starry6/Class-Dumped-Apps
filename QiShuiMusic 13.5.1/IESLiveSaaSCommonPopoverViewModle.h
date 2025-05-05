@interface IESLiveSaaSCommonPopoverViewModle : NSObject
@property (nonatomic) q showtype;
@property (nonatomic) q arrowDirection;
@property (nonatomic) UIView pointingView;
@property (nonatomic) UIView containerView;
@property (nonatomic) double offsetForArrowToContainer;
@property (nonatomic) double offsetForArrowToPointingView;
@property (nonatomic) NSString schemaUrl;
- (double)offsetForArrowToContainer;
- (double)offsetForArrowToPointingView;
- (id)pointingView;
- (id)schemaUrl;
- (void)setOffsetForArrowToContainer:;
- (void)setOffsetForArrowToPointingView:;
- (void)setPointingView:;
- (void)setSchemaUrl:;
- (void)setShowtype:;
- (long long)showtype;
- (long long)arrowDirection;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setArrowDirection:;
@end
