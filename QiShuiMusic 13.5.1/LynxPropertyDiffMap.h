@interface LynxPropertyDiffMap : NSObject
@property (nonatomic) NSMutableDictionary backingMap;
@property (nonatomic) NSMutableSet dirtyPropertiesSet;
- (id)backingMap;
- (void)clearDirtyRecords;
- (void)deleteKey:;
- (id)dirtyPropertiesSet;
- (id)getUpdatedKeys;
- (id)getUpdatedValueForKey:;
- (id)getValueForKey:defaultValue:;
- (BOOL)isValueForKeyUpdated:;
- (void)putValue:forKey:;
- (void)setBackingMap:;
- (void)setDirtyPropertiesSet:;
- (BOOL)valueChangedForKey:updateTo:;
- (id)init;
- (id)getValueForKey:;
- (void).cxx_destruct;
@end
