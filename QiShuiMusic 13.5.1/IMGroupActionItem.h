@interface IMGroupActionItem : IMItem
@property (nonatomic) q actionType;
@property (nonatomic) NSString otherHandle;
@property (nonatomic) NSString otherUnformattedID;
@property (nonatomic) NSString otherCountryCode;
- (id)_newChatItems;
- (BOOL)shouldGenerateTopLevelChatItem;
- (void)dealloc;
- (long long)actionType;
- (void)setActionType:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setOtherHandle:;
- (id)otherHandle;
- (id)fileTransferGUIDs;
- (id)copyDictionaryRepresentation;
- (BOOL)actionIsGroupPhoto;
- (BOOL)isCompatibleWithMiC;
- (id)otherCountryCode;
- (void)setOtherCountryCode:;
- (id)otherUnformattedID;
- (void)setOtherUnformattedID:;
+ (BOOL)supportsSecureCoding;
@end
