@interface SCNNodeReference : SCNReferenceNode
@property (nonatomic) NSString referenceSceneName;
@property (nonatomic) NSString referenceNodeName;
- (void)dealloc;
- (void)_reloadWithScene:;
- (id)referenceSceneName;
- (void)setReferenceSceneName:;
- (id)referenceNodeName;
- (void)setReferenceNodeName:;
@end
