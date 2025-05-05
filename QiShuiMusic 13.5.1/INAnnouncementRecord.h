@interface INAnnouncementRecord : NSObject
@property (nonatomic) INHomeFilter originator;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSNumber duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originator;
- (id)_dictionaryRepresentation;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (id)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOriginator:identifier:duration:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
