@interface AWEIMLandingSnapShotLaunchStorage : NSObject
@property (nonatomic) NSArray snapShotModelList;
@property (nonatomic) NSData snapShotData;
@property (nonatomic) BOOL isIMDylibLoaded;
- (BOOL)isIMDylibLoaded;
- (id)snapShotModelList;
- (void)asyncPreloadChatSnapShotDataWithGroup:;
- (id)p_getStoredData;
- (id)snapShotData;
- (void)doTaskAfterIMDylibLoadedWithSkylightTask:;
- (void)setSnapShotModelList:;
- (void)setSnapShotData:;
- (void)setIsIMDylibLoaded:;
- (void)clear;
- (void).cxx_destruct;
+ (id)storageKey:;
+ (id)shared;
@end
