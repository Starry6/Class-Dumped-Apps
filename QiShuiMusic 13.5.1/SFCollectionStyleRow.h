@interface SFCollectionStyleRow : SFCollectionStyle
@property (nonatomic) BOOL drawPlattersIfNecessary;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q initiallyVisibleCardSectionCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (BOOL)drawPlattersIfNecessary;
- (void)setDrawPlattersIfNecessary:;
- (id)copyWithZone:;
- (BOOL)hasDrawPlattersIfNecessary;
+ (BOOL)supportsSecureCoding;
@end
