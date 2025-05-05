@interface IESSimpleSchemaResolver : NSObject
@property (nonatomic) NSString hostname;
@property (nonatomic) NSString key;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHost:keyQuery:;
- (id)resolveFlatSchema:;
- (BOOL)shouldInterceptHierachicalSchema:;
- (id)hostname;
- (void)setHostname:;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
@end
