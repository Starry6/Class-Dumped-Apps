@interface PTYRequestConfig : NSObject
@property (nonatomic) BOOL download;
@property (nonatomic) NSDictionary filters;
- (id)filters;
- (BOOL)download;
- (id)init;
- (void)setFilters:;
- (void).cxx_destruct;
- (void)setDownload:;
@end
