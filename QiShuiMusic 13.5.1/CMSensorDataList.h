@interface CMSensorDataList : NSObject
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id).cxx_construct;
- (id)initWithIdentifier:andType:;
- (id)initFrom:to:withType:;
- (void)_updateCurrentBlockProperties;
- (BOOL)_updatePointers;
@end
