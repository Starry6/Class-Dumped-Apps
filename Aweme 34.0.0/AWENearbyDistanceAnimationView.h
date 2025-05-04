@interface AWENearbyDistanceAnimationView : UIView
@property (nonatomic) AWENearbyDistanceAnimationContentView firstContentView;
@property (nonatomic) AWENearbyDistanceAnimationContentView secondContentView;
@property (nonatomic) Q status;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateDistance:;
- (void)__buildUI;
- (id)firstContentView;
- (id)secondContentView;
- (BOOL)__shouldUpdateWithText:;
- (void)setFirstContentView:;
- (void)setSecondContentView:;
- (void)setStatus:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)status;
@end
