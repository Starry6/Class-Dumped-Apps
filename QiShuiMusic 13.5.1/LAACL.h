@interface LAACL : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSDictionary constraints;
- (void)dealloc;
- (id)data;
- (id)constraints;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)evaluateInContext:options:reply:;
@end
