@interface SiriTTSService_TTSAXResourceManager : NSObject
@property (nonatomic) NSArray allCompactResources;
@property (nonatomic) TTSAXResourceManager axManager;
- (id)init;
- (void).cxx_destruct;
- (id)allCompactResources;
- (void)setAllCompactResources:;
- (id)axManager;
- (void)setAxManager:;
+ (id)sharedInstance;
@end
