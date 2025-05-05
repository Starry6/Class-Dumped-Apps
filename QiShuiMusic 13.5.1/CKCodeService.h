@interface CKCodeService : NSObject
@property (nonatomic) CKContainer container;
@property (nonatomic) CKCodeServiceImplementation implementation;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSURL serviceInstanceURL;
- (id)init;
- (id)_initWithImplementation:container:;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)implementation;
- (id)boxedDatabaseScope;
- (id)serviceInstanceURL;
- (id)container;
- (void)addOperation:;
- (id)serviceName;
- (void).cxx_destruct;
- (id)description;
@end
