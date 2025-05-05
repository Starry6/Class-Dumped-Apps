@interface IESLiveCommonPopoverViewModle : NSObject
@property (nonatomic) q showtype;
@property (nonatomic) q arrowDirection;
@property (nonatomic) UIView pointingView;
@property (nonatomic) UIView containerView;
@property (nonatomic) double offsetForArrowToContainer;
@property (nonatomic) double offsetForArrowToPointingView;
@property (nonatomic) double spaceForArrowToPointingView;
@property (nonatomic) NSString schemaUrl;
- (void)setSpaceForArrowToPointingView:;
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
- (double)spaceForArrowToPointingView;
- (long long)arrowDirection;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setArrowDirection:;
@end
