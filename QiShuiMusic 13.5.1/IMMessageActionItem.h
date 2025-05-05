@interface IMMessageActionItem : IMItem
@property (nonatomic) q actionType;
@property (nonatomic) NSString otherHandle;
@property (nonatomic) NSString otherUnformattedID;
@property (nonatomic) NSString otherCountryCode;
@property (nonatomic) NSString originalMessageGUID;
- (id)_newChatItems;
- (void)dealloc;
- (long long)actionType;
- (void)setActionType:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setOtherHandle:;
- (id)otherHandle;
- (id)copyDictionaryRepresentation;
- (id)otherCountryCode;
- (void)setOtherCountryCode:;
- (id)otherUnformattedID;
- (void)setOtherUnformattedID:;
- (id)originalMessageGUID;
- (void)setOriginalMessageGUID:;
+ (BOOL)supportsSecureCoding;
@end
