@interface IESECStoreLynxResourceManager : NSObject
@property (nonatomic) NSCache templateDataCache;
@property (nonatomic) NSCache dynamicComponentCache;
- (void)appDidReceiveMemoryWarningNotification;
- (void)asyncLoadForestMetaDataForURL:completion:;
- (id)dynamicComponentCache;
- (id)loadFalconMetaDataForURL:enableCache:;
- (void)preLoadTemplateFromForest:;
- (id)preloadTemplateData:targetChannel:;
- (void)setDynamicComponentCache:;
- (void)setTemplateDataCache:;
- (id)syncLoadForestMetaDataForURL:;
- (id)templateDataCache;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
