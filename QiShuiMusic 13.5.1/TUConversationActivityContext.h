@interface TUConversationActivityContext : NSObject
@property (nonatomic) NSString typedIdentifier;
@property (nonatomic) NSString actionDescription;
@property (nonatomic) NSString ongoingDescription;
@property (nonatomic) NSString completedDescription;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL media;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)actionDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setActionDescription:;
- (BOOL)isMedia;
- (id)typedIdentifier;
- (id)ongoingDescription;
- (id)completedDescription;
- (id)initWithContextIdentifier:actionDescription:ongoingDescription:completedDescription:;
- (BOOL)isEqualToActivityContext:;
- (void)setTypedIdentifier:;
- (void)setOngoingDescription:;
- (void)setCompletedDescription:;
+ (BOOL)supportsSecureCoding;
+ (id)mediaContextIdentifiers;
@end
