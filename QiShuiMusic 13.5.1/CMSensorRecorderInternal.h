@interface CMSensorRecorderInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)teardown;
- (id)newMetaByID:forType:;
- (id)newMetaSinceID:forType:;
- (id)_newMetaUsingMessage:withIdentifier:forType:;
- (id)newMetaFrom:to:forType:;
- (BOOL)writeSensorDataToFile:from:to:forType:;
- (BOOL)setSensorSampleRate:forType:;
- (id)newDataByID:metaID:forType:;
@end
