@interface AFSiriRequest : NSObject
@property (nonatomic) NSString _refId;
@property (nonatomic) NSString _originatingAceID;
@property (nonatomic) NSUUID _turnId;
- (id)_identifier;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithOriginatingAceID:;
- (id)_originatingAceID;
- (BOOL)_makeAppFrontmost;
- (id)_af_analyticsContextDescription;
- (id)_initWithOriginatingAceID:identifier:turnId:;
- (id)_descriptionWithProperties:;
- (id)requestName;
- (id)_turnId;
- (void)_setOriginatingAceID:;
- (void)_setTurnId:;
- (id)_refId;
- (void)_setRefId:;
+ (BOOL)supportsSecureCoding;
@end
