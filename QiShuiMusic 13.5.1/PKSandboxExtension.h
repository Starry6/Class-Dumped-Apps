@interface PKSandboxExtension : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) q handle;
- (void)dealloc;
- (id)initWithExtension:;
- (id)token;
- (long long)handle;
- (void)consume;
- (void)setHandle:;
- (void)expel;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
