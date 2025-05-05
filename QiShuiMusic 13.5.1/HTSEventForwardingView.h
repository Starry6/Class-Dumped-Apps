@interface HTSEventForwardingView : UIView
@property (nonatomic) BOOL disableForwarding;
@property (nonatomic) BOOL isHitTestEndEditing;
@property (nonatomic) IESLiveViewLevelController levelController;
@property (nonatomic) NSString levelName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)levelController;
- (id)initWithLevelName:sortedLevels:;
- (void)addSubview:identifier:;
- (BOOL)disableForwarding;
- (BOOL)isHitTestEndEditing;
- (id)levelName;
- (void)setDisableForwarding:;
- (void)setHitTestEndEditing:;
- (void)setIsHitTestEndEditing:;
- (void)setLevelController:;
- (void)setLevelName:;
- (void)willRemoveSubview:;
- (id)hitTest:withEvent:;
- (void)didAddSubview:;
- (void).cxx_destruct;
- (id)viewForIdentifier:;
- (BOOL)containsSubview:;
@end
