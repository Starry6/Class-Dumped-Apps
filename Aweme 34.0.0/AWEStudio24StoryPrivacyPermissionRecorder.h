@interface AWEStudio24StoryPrivacyPermissionRecorder : NSObject
@property (nonatomic) NSMutableDictionary infoDict;
@property (nonatomic) NSLock lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)setPermissionRecorderInfo:forCreationID:;
- (void)updateCachedInfoDict;
- (void)cleanPermissionRecorderInfoForCreationID:;
- (id)permissionRecorderInfoForCreationID:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)infoDict;
- (void)setInfoDict:;
+ (id)cachekey;
@end
