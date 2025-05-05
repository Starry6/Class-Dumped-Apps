@interface IESWebViewSchemaResolver : NSObject
@property (nonatomic) IESSimpleSchemaResolver simpleResolver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolveFlatSchema:;
- (void)setSimpleResolver:;
- (BOOL)shouldInterceptHierachicalSchema:;
- (id)simpleResolver;
- (id)init;
- (void).cxx_destruct;
@end
