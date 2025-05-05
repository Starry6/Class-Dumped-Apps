@interface BWColorLookupCacheEntry : NSObject
@property (nonatomic) NSData foregroundColorLookupTable;
@property (nonatomic) NSData backgroundColorLookupTable;
- (void)dealloc;
- (id)foregroundColorLookupTable;
- (id)initWithForegroundColorLookupTable:backgroundColorLookupTable:;
- (id)backgroundColorLookupTable;
@end
