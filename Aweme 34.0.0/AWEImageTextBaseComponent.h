@interface AWEImageTextBaseComponent : NSObject
@property (nonatomic) <AWEImageTextComponentManagerProtocol> manager;
- (id)registerProtocol;
- (id)sectionViewModel;
- (void)executeSelector:inProtocol:withArgs:;
- (id)findBaseComponentWith:;
- (id)knowledge_PerformSelector:withObjects:;
- (BOOL)shouldResponseToSelector:inProtocol:;
- (void)setManager:;
- (id)handler;
- (id)sectionController;
- (id)manager;
- (void).cxx_destruct;
- (id)initWithManager:;
@end
