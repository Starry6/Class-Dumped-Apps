@interface IESSaaSTIMMachOReader : NSObject
@property (nonatomic) NSMutableDictionary dict;
- (id)stringsForType:;
- (id)functionsForType:;
- (void)lazilyInitialize;
- (id)parseValue:withType:;
- (BOOL)readSection:inSegment:withImageInfo:dataHandler:;
- (id)stringForKey:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
- (id)functionForKey:;
+ (id)sharedInstance;
@end
