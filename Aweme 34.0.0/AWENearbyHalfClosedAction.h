@interface AWENearbyHalfClosedAction : MTLModel
@property (nonatomic) AWENearbyEnterBubbleModel bubbleModel;
@property (nonatomic) AWENearbyGuideMaskModel maskModel;
@property (nonatomic) AWENearbyHalfCloseAnimationConfig closeAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)maskModel;
- (void)setMaskModel:;
- (id)bubbleModel;
- (void)setBubbleModel:;
- (id)closeAnimation;
- (void)setCloseAnimation:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
