@interface VSJSAppScriptEvaluatorResult : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) BOOL loaded;
@property (nonatomic) NSError loadError;
- (id)url;
- (void)setUrl:;
- (BOOL)loaded;
- (void).cxx_destruct;
- (id)loadError;
- (void)setLoaded:;
- (void)setLoadError:;
@end
