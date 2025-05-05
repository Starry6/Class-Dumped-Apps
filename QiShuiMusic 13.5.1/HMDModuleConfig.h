@interface HMDModuleConfig : NSObject
@property (nonatomic) BOOL enableOpen;
@property (nonatomic) BOOL enableUpload;
- (BOOL)canStartTaskIndependentOfStart;
- (long long)compareStartWeight:;
- (BOOL)enableOpen;
- (BOOL)enableUpload;
- (id)getModule;
- (void)setEnableOpen:;
- (void)setEnableUpload:;
- (long long)startWeight;
- (void)updateWithAPISettings:;
- (id)initWithDictionary:;
- (BOOL)isValid;
- (BOOL)canStart;
+ (id)allLocalModuleClasses;
+ (id)allRemoteModuleClasses;
+ (id)hmd_attributeMapDictionary;
+ (id)loadClassesFromSectionName:;
+ (id)configKey;
@end
