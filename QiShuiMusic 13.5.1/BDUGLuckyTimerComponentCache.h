@interface BDUGLuckyTimerComponentCache : NSObject
@property (nonatomic) NSArray savedTimerTaskKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__convertToSaveKeyFromTaskKey:;
- (double)__defaultExpireDate;
- (id)__getCacheInfoForTask:;
- (void)__triggerCacheExpire;
- (void)clearSavedTaskCacheForTask:;
- (id)getSavedInfoForTask:;
- (double)getSavedUnuploadedTsForTask:;
- (void)saveInfo:unuploadedTs:forTask:expireTime:;
- (void)saveUnuploadedTs:forTask:expireTime:;
- (id)savedTimerTaskKeys;
- (void)setSavedTimerTaskKeys:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
