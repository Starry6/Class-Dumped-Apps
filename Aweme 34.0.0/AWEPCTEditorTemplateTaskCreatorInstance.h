@interface AWEPCTEditorTemplateTaskCreatorInstance : NSObject
@property (nonatomic) ACCGenericTemplateAlbumHandler handler;
@property (nonatomic) NPGenericTemplateService_OC service;
- (void)setHandler:;
- (id)service;
- (void)setService:;
- (id)handler;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
