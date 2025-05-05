@interface VEFeatureOCWrapper : NSObject
@property (nonatomic) ^v handler;
@property (nonatomic) NSString identifier;
@property (nonatomic) HTSGLContext context;
@property (nonatomic) NSLock refLock;
@property (nonatomic) Q referenceCount;
- (id)refLock;
- (void)addReferenceCount;
- (void)deleteReferenceCount;
- (void)destroyByEngine:;
- (unsigned long long)getReferenceCount;
- (id)initWithRenderer:handleParameters:context:;
- (void)setRefLock:;
- (void)dealloc;
- (id)context;
- (id)identifier;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)description;
- (void)setContext:;
- (void)setIdentifier:;
- (unsigned long long)referenceCount;
- (void)setReferenceCount:;
@end
