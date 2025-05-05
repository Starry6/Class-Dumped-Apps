@interface IMGroupTitleChangeItem : IMItem
@property (nonatomic) NSString title;
@property (nonatomic) NSString otherHandle;
@property (nonatomic) NSString otherUnformattedID;
@property (nonatomic) NSString otherCountryCode;
- (id)_newChatItems;
- (void)dealloc;
- (id)initWithDictionary:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setOtherHandle:;
- (id)otherHandle;
- (id)copyDictionaryRepresentation;
- (id)otherCountryCode;
- (void)setOtherCountryCode:;
- (id)otherUnformattedID;
- (void)setOtherUnformattedID:;
+ (BOOL)supportsSecureCoding;
@end
