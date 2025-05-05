@interface GEOModuleLayoutEntry : NSObject
@property (nonatomic) NSString debugName;
@property (nonatomic) NSArray modules;
- (id)modules;
- (id)debugName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithModuleLayoutEntry:moduleConfigProvider:;
- (void)_performPostCheckForModules:;
+ (id)moduleLayoutEntryFromArray:;
@end
