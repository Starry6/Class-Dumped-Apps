@interface AWEPluginRevisitCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)bdp_showSideBarRevisitGuide:schema:;
- (void)bdp_showSidebarBubbleWithModel:completion:;
+ (id)sharedPlugin;
+ (BOOL)showSideBarRevisitGuideWithSchemaURL:;
+ (BOOL)gameShowSideBarRevisitGuideWithSchemaURL:;
+ (BOOL)canShowRevisitEffectWithSchema:;
@end
