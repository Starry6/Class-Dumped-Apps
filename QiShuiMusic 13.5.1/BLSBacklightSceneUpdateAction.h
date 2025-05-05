@interface BLSBacklightSceneUpdateAction : BSAction
@property (nonatomic) BLSBacklightChangeEvent event;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL touchTargetable;
@property (nonatomic) BOOL isUpdateToDateSpecifier;
- (id)event;
- (BOOL)isTouchTargetable;
- (BOOL)isAnimated;
- (id)initWithBacklightChangeEvent:animated:touchTargetable:isUpdateToDateSpecifier:completion:;
- (BOOL)isUpdateToDateSpecifier;
@end
