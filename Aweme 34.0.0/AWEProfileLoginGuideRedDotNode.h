@interface AWEProfileLoginGuideRedDotNode : NSObject
@property (nonatomic) <AWEProfileRedDotNodeProtocol> parentNode;
@property (nonatomic) <AWEProfileRedDotNodeModelProtocol> currentModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (void)showRedDotIfNeed;
- (void)bindParentNode:;
- (void)bindAdapter:;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (void)hideLoginGuideRedDotFromTab;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)parentNode;
- (id)currentModel;
- (void)setParentNode:;
- (void)setCurrentModel:;
- (void)updateWithModel:;
@end
