@interface LSEnumerator : NSEnumerator
@property (nonatomic) @? errorHandler;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) @? filter;
- (id)_initWithContext:;
- (id)filter;
- (id)nextObject;
- (void)setFilter:;
- (id)init;
- (void)swift_forEach:;
- (id)swift_firstWhere:;
- (id)errorHandler;
- (id)copy;
- (void)setErrorHandler:;
- (id)predicate;
- (void)setPredicate:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)new;
+ (id)enumeratorForApplicationProxiesWithOptions:;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:options:;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:options:filter:;
@end
