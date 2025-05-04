@interface AWERichAwemeLifeCardImageDescBusinessImpl : NSObject
@property (nonatomic) AWERichAwemeLifeCardImageDescView descriptionView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hideExtraDescription;
- (BOOL)shouldShowDescriptionWithModel:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)handleTap:;
- (id)descriptionView;
- (void)setDescriptionView:;
+ (BOOL)shouldShowElementWithContext:;
@end
