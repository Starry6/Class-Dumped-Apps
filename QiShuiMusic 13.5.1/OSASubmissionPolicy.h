@interface OSASubmissionPolicy : NSObject
@property (nonatomic) BOOL ignoreProxies;
@property (nonatomic) BOOL hasTasking;
@property (nonatomic) NSDictionary latestResults;
@property (nonatomic) NSMutableDictionary scanOptions;
- (void)persist;
- (id)init;
- (BOOL)ignoreProxies;
- (void).cxx_destruct;
- (BOOL)hasTasking;
- (id)initWithTemplate:options:;
- (void)registerRouting:result:;
- (id)scanOptions;
- (id)buildSubmissionTemplateForConfig:;
- (void)setIgnoreProxies:;
- (id)shouldSubmitRouting:;
- (id)_loadPreviousResults;
- (id)latestResults;
@end
