@interface IDSRegistrationCompletedMetric : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I awdIdentifier;
@property (nonatomic) S rtcType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) PBCodable<NSCopying> awdRepresentation;
@property (nonatomic) NSInteger registrationType;
@property (nonatomic) NSString serviceIdentifier;
@property (nonatomic) BOOL wasSuccessful;
@property (nonatomic) q registrationError;
@property (nonatomic) q circleStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)registrationType;
- (unsigned short)rtcType;
- (long long)registrationError;
- (BOOL)wasSuccessful;
- (id)serviceIdentifier;
- (id)initWithRegistrationType:serviceIdentifier:wasSuccessful:registrationError:circleStatus:;
- (id)awdRepresentation;
- (void).cxx_destruct;
- (long long)circleStatus;
- (unsigned int)awdIdentifier;
- (id)name;
- (id)dictionaryRepresentation;
@end
