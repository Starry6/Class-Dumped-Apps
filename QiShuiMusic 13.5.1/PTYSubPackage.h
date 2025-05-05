@interface PTYSubPackage : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
@property (nonatomic) NSString modelGroup;
@property (nonatomic) Q engineType;
@property (nonatomic) NSString originModelPath;
@property (nonatomic) Q modelEngineType;
@property (nonatomic) NSString extraParams;
- (id)originModelPath;
- (unsigned long long)modelEngineType;
- (id)extraParams;
- (id)initWithCoreSubPackage:;
- (void)setModelGroup:;
- (void)setOriginModelPath:;
- (void)setName:;
- (void)setVersion:;
- (id)version;
- (unsigned long long)engineType;
- (void).cxx_destruct;
- (id)name;
- (void)setEngineType:;
- (id)modelGroup;
- (id)initWithModelInfo:;
@end
