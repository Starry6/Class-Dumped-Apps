@interface IESLiveSaaSEventForwardingView : UIView
@property (nonatomic) BOOL disableForwarding;
@property (nonatomic) IESLiveSaaSViewLevelController levelController;
@property (nonatomic) NSString levelName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)levelController;
- (void)addSubview:identifier:;
- (BOOL)disableForwarding;
- (id)levelName;
- (void)setDisableForwarding:;
- (void)setLevelController:;
- (void)setLevelName:;
- (void)willRemoveSubview:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)viewForIdentifier:;
- (BOOL)containsSubview:;
@end
