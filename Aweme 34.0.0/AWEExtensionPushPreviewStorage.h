@interface AWEExtensionPushPreviewStorage : AWEExtensionStorage
@property (nonatomic) NSMutableArray options;
@property (nonatomic) NSArray pushPreviewOptions;
@property (nonatomic) BOOL isKeepPushs;
- (void)addPushPreviewOption:previewType:;
- (id)pushPreviewUrlKey;
- (id)keepPushsFlagKey;
- (void)trackPushPreviewWithOption:previewType:;
- (void)updateKeepPushsFlag:;
- (BOOL)isKeepPushs;
- (id)pushPreviewOptions;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
- (void)reset;
+ (id)sharedPushPreviewStorage;
+ (unsigned long long)previewTypeFromOption:;
@end
