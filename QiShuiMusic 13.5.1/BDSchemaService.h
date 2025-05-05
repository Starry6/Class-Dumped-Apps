@interface BDSchemaService : NSObject
@property (nonatomic) BDUrlParser urlParser;
- (id)generateDataWithQueryItems:url:;
- (id)generateDataWithConfig:url:;
- (id)generateDataWithUrl:;
- (void)setUrlParser:;
- (id)urlParser;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedSchemaService;
+ (id)alloc;
@end
