@interface CPLPlatformObject : NSObject
@property (nonatomic) <CPLAbstractObject> abstractObject;
- (id)abstractObject;
- (id)initWithAbstractObject:;
- (id)init;
- (void).cxx_destruct;
- (id)description;
@end
