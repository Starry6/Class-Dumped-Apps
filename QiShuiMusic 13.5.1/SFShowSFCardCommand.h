@interface SFShowSFCardCommand : SFCommand
@property (nonatomic) SFCard card;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)initWithProtobuf:;
- (void)setCard:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)card;
- (id)copyWithZone:;
- (id)embeddedCards;
+ (BOOL)supportsSecureCoding;
@end
