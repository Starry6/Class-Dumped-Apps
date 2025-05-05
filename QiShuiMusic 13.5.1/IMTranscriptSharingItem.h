@interface IMTranscriptSharingItem : IMItem
@property (nonatomic) NSString otherHandle;
@property (nonatomic) NSString otherUnformattedID;
@property (nonatomic) NSString otherCountryCode;
- (id)_newChatItems;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
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
