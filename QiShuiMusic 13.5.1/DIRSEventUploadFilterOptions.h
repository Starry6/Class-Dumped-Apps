@interface DIRSEventUploadFilterOptions : NSObject
@property (nonatomic) NSArray regionKeys;
@property (nonatomic) NSArray includeTypes;
@property (nonatomic) NSArray excludeTypes;
- (id)includeTypes;
- (void)setExcludeTypes:;
- (void)setIncludeTypes:;
- (void)setRegionKeys:;
- (id)excludeTypes;
- (void).cxx_destruct;
- (id)regionKeys;
@end
