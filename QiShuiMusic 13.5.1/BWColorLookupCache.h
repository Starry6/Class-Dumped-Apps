@interface BWColorLookupCache : NSObject
- (id)init;
- (void)dealloc;
- (id)blackColorLookupTable;
- (id)interpolatedColorLookupTableFromTable:toTable:fractionComplete:;
- (id)fetchColorLookupTablesForFilter:;
- (id)colorLookupTablesForFilter:;
- (id)whiteColorLookupTable;
- (id)identityColorLookupTable;
@end
