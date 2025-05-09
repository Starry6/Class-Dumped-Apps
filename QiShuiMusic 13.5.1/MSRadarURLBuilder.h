@interface MSRadarURLBuilder : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL prependSystemVersionToTitle;
@property (nonatomic) NSString radarDescription;
@property (nonatomic) BOOL appendStandardDisclaimerToDescription;
@property (nonatomic) BOOL appendSysdiagnoseHowTo;
@property (nonatomic) q component;
@property (nonatomic) q reproducibility;
@property (nonatomic) q classification;
@property (nonatomic) NSString attachmentPath;
@property (nonatomic) NSArray extensionIdentifiers;
- (id)init;
- (long long)component;
- (void)setTitle:;
- (long long)classification;
- (id)title;
- (void)setClassification:;
- (void).cxx_destruct;
- (id)radarDescription;
- (void)setRadarDescription:;
- (id)extensionIdentifiers;
- (void)setExtensionIdentifiers:;
- (void)setComponent:;
- (long long)reproducibility;
- (void)setReproducibility:;
- (BOOL)prependSystemVersionToTitle;
- (void)setPrependSystemVersionToTitle:;
- (BOOL)appendStandardDisclaimerToDescription;
- (void)setAppendStandardDisclaimerToDescription:;
- (BOOL)appendSysdiagnoseHowTo;
- (void)setAppendSysdiagnoseHowTo:;
- (id)attachmentPath;
- (void)setAttachmentPath:;
+ (BOOL)canOpenRadar;
+ (id)stringFromRadarClassification:;
+ (id)stringFromRadarReproducibility:;
+ (id)_componentInfoDictionaryFromComponent:;
+ (id)componentNameFromRadarComponent:;
+ (id)componentIDFromRadarComponent:;
+ (id)radarURLWithBuilder:;
+ (id)_URLFromQueryItems:builder:;
@end
