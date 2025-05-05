@interface PLManagedObjectValidationResult : NSObject
@property (nonatomic) BOOL status;
@property (nonatomic) NSManagedObject<PLValidatedManagedObject> validatedObject;
@property (nonatomic) NSArray errorMessages;
@property (nonatomic) NSArray infoMessages;
- (void)setStatus:;
- (void).cxx_destruct;
- (BOOL)status;
- (id)errorMessages;
- (void)setErrorMessages:;
- (id)validatedObject;
- (void)setValidatedObject:;
- (id)infoMessages;
- (void)setInfoMessages:;
@end
