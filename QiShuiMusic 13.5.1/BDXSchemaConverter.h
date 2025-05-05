@interface BDXSchemaConverter : NSObject
@property (nonatomic) NSString log;
@property (nonatomic) NSMutableArray interceptorList;
@property (nonatomic) NSURL replacedURL;
@property (nonatomic) NSURL resolvedURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__getUniqueUrl:;
- (id)interceptorList;
- (long long)__getSchemaType:;
- (id)__resolveToBulletSchema:type:;
- (void)decorateSchemaWithAnniePro:;
- (id)replacedURL;
- (void)setInterceptorList:;
- (id)resolvedURL;
- (id)log;
- (void)setLog:;
- (id)errorMessage;
- (void).cxx_destruct;
- (BOOL)convert:;
+ (id)converterWithInterceptor:;
@end
