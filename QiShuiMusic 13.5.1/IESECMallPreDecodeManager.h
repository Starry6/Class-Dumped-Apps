@interface IESECMallPreDecodeManager : NSObject
@property (nonatomic) NSMutableDictionary bundleDict;
@property (nonatomic) NSLock lock;
- (id)bundleDict;
- (void)p_excutePreDecodeWithItemType:schemaURL:;
- (id)safeGetPreDecodeBundleWithItemType:;
- (void)safeSaveTemplateBundle:itemType:;
- (void)setBundleDict:;
- (void)triggerECMallLynxAirPreDecodeWithConfig:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedManager;
@end
