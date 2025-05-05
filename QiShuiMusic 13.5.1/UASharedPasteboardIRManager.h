@interface UASharedPasteboardIRManager : NSObject
@property (nonatomic) NSMutableDictionary lookupTable;
- (id)init;
- (void).cxx_destruct;
- (void)initializeConverters;
- (id)registeredConverters;
- (void)registerIRHandlerClass:forType:;
- (id)converterForType:;
- (id)lookupTable;
- (void)setLookupTable:;
+ (id)sharedIRManager;
@end
