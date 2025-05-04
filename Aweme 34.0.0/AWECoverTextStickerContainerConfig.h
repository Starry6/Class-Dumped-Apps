@interface AWECoverTextStickerContainerConfig : NSObject
@property (nonatomic) NSArray stickerPlugins;
@property (nonatomic) @ contextId;
@property (nonatomic) @? stickerHierarchyComparator;
@property (nonatomic) BOOL needAdaptScreen;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} standPlayerFrame;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;
- (id)standPlayerFrame;
- (void)setStickerHierarchyComparator:;
- (BOOL)needAdaptScreen;
- (void)setIgnoreMaskRadiusForXScreen:;
- (void)setNeedAdaptScreen:;
- (void)setStandPlayerFrame:;
- (id)stickerHierarchyComparator;
- (BOOL)ignoreMaskRadiusForXScreen;
- (id)stickerPlugins;
- (void)setStickerPlugins:;
- (Class)stickerFactoryClass;
- (Class)stickerPluginConfigClass;
- (id)init;
- (void)setContextId:;
- (id)contextId;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)pluginList;
@end
