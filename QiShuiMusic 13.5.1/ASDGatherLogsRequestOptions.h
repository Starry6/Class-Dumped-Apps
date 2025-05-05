@interface ASDGatherLogsRequestOptions : NSObject
@property (nonatomic) NSString fileName;
@property (nonatomic) BOOL verbose;
@property (nonatomic) NSArray urlFilters;
- (id)fileName;
- (void).cxx_destruct;
- (void)setFileName:;
- (BOOL)verbose;
- (id)copyWithZone:;
- (void)setVerbose:;
- (id)urlFilters;
- (void)setUrlFilters:;
@end
