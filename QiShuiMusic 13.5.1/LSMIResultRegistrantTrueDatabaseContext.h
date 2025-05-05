@interface LSMIResultRegistrantTrueDatabaseContext : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDatabase:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)fullBundleExistsForIdentifier:;
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:installDictionary:error:;
- (id)findContainerizedRecordForBundleUnit:error:;
- (id)unregisterApplicationWithBundleIdentifier:type:error:;
@end
