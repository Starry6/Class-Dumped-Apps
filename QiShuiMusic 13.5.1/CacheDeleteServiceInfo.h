@interface CacheDeleteServiceInfo : NSObject
@property (nonatomic) NSExtensionContext extensionContext;
@property (nonatomic) BOOL doNotQuery;
- (void)setDoNotQuery:;
- (void).cxx_destruct;
- (BOOL)doNotQuery;
- (id)extensionContext;
- (id)initWithExtensionContext:;
+ (id)serviceInfoWithExtensionContext:;
@end
