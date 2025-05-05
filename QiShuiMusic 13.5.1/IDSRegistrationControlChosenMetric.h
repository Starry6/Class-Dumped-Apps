@interface IDSRegistrationControlChosenMetric : NSObject
@property (nonatomic) q registrationType;
@property (nonatomic) q registrationControlStatus;
@property (nonatomic) BOOL isInterestingRegion;
@property (nonatomic) I awdIdentifier;
@property (nonatomic) PBCodable<NSCopying> awdRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)registrationType;
- (id)awdRepresentation;
- (unsigned int)awdIdentifier;
- (id)name;
- (id)initWithRegistrationType:registrationControlStatus:isInterestingRegion:;
- (long long)registrationControlStatus;
- (BOOL)isInterestingRegion;
@end
