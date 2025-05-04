@interface AWEMusicCollectionService : NSObject
+ (void)changeCollection:model:eventModel:completion:;
+ (void)reportCollectionWithModel:eventModel:targetCollectionType:;
+ (void)changeCollectionModel:eventModel:completion:;
+ (void)sendNotification:;
@end
