@interface FLHeadlessExtensionLoader : NSObject
@property (nonatomic) NSExtension extension;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSUUID sessionID;
@property (nonatomic) @? requestInterruptionBlock;
- (void)setSessionID:;
- (void)setRequestInterruptionBlock:;
- (id)sessionID;
- (void)dealloc;
- (id)requestInterruptionBlock;
- (id)extension;
- (id)identifier;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (id)initWithFollowUp:andDelegate:;
- (void)_terminate;
- (BOOL)_loadExtension:;
- (BOOL)_setupSessionIfNeeded:;
- (id)_loadExtensionForIdentifier:error:;
- (id)_hostContextForExtension:;
+ (id)sharedExtensionQueue;
@end
