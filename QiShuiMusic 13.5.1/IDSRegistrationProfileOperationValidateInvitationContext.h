@interface IDSRegistrationProfileOperationValidateInvitationContext : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) BOOL success;
@property (nonatomic) I connectionType;
@property (nonatomic) I resultCode;
@property (nonatomic) I registrationError;
@property (nonatomic) NSNumber genericError;
@property (nonatomic) NSNumber URLError;
@property (nonatomic) NSNumber POSIXError;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)connectionType;
- (unsigned int)resultCode;
- (unsigned int)registrationError;
- (id)genericError;
- (BOOL)success;
- (void).cxx_destruct;
- (id)guid;
- (id)name;
- (id)POSIXError;
- (id)dictionaryRepresentation;
- (id)URLError;
- (id)initWithGuid:success:connectionType:resultCode:registrationError:genericError:URLError:POSIXError:;
@end
