@interface AWERxModule : NSObject
@property (nonatomic) <NSObject> unique;
@property (nonatomic) NSString moduleName;
- (id)initWithModuleName:unique:;
- (id)moduleName;
- (unsigned long long)hash;
- (id)unique;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
