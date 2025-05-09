@interface PLFileSystemVolume : PLManagedObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString volumeUuidString;
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) NSSet resources;
- (void)awakeFromFetch;
- (id)payloadID;
- (id)url;
- (void)didTurnIntoFault;
- (id)payloadIDForTombstone:;
- (void)willTurnIntoFault;
- (void)_registerWithVolumeManager;
- (id)payloadForChangedKeys:;
- (void)awakeFromInsert;
- (void)setUrl:;
- (BOOL)isOffline;
- (BOOL)supportsCloudUpload;
- (void).cxx_destruct;
- (void)_unregisterWithVolumeManager;
- (void)unregisterWithVolumeManager;
- (id)predictedURL;
+ (id)entityName;
+ (id)volumeForURL:context:;
+ (id)keyPathsForValuesAffectingValueForKey:;
+ (id)volumeForObjectUUID:context:;
+ (id)predictedURLForVolumeName:;
+ (id)volumeForVolumeUUID:context:;
@end
