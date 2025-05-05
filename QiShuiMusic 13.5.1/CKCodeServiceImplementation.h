@interface CKCodeServiceImplementation : NSObject
@property (nonatomic) CKContainerImplementation containerImplementation;
@property (nonatomic) NSObject<OS_dispatch_queue> underlyingDispatchQueue;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSURL serviceInstanceURL;
@property (nonatomic) NSNumber boxedDatabaseScope;
@property (nonatomic) NSOperationQueue operationQueue;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)boxedDatabaseScope;
- (id)serviceInstanceURL;
- (id)containerImplementation;
- (id)underlyingDispatchQueue;
- (id)CKStatusReportArray;
- (id)serviceName;
- (void)setContainerImplementation:;
- (id)operationQueue;
- (void)addOperation:wrappingCodeService:convenienceConfiguration:;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithContainerImplementation:serviceName:boxedDatabaseScope:serviceInstanceURL:;
- (void)setUnderlyingDispatchQueue:;
@end
