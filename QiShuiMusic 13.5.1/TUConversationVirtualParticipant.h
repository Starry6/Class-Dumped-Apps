@interface TUConversationVirtualParticipant : NSObject
@property (nonatomic) Q identifier;
@property (nonatomic) NSString pluginName;
- (id)pluginName;
- (unsigned long long)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:pluginName:;
- (BOOL)isEqualToConversationVirtualParticipant:;
+ (BOOL)supportsSecureCoding;
@end
