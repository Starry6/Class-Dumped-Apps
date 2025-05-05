@interface MTLBinaryEntry : NSObject
@property (nonatomic) NSObject<OS_dispatch_data> data;
@property (nonatomic) NSArray importedSymbols;
@property (nonatomic) NSArray importedLibraries;
@property (nonatomic) NSObject<OS_dispatch_data> airntData;
- (void)dealloc;
- (id)data;
- (id)description;
- (id)importedSymbols;
- (id)importedLibraries;
- (id)initWithData:importedSymbols:importedLibraries:;
- (id)airntData;
- (void)setAirntData:;
@end
