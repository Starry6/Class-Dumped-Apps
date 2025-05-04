@interface AWESearchMiddleGSRequstContext : NSObject
@property (nonatomic) NSString urlStr;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) BOOL useNewInterface;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSString searchStyle;
@property (nonatomic) NSString cacheKey;
- (id)urlStr;
- (void)setUrlStr:;
- (void)setUseNewInterface:;
- (BOOL)useNewInterface;
- (void)setSearchStyle:;
- (id)searchStyle;
- (id)cacheKey;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setCacheKey:;
- (id)requestParams;
- (void)setRequestParams:;
@end
