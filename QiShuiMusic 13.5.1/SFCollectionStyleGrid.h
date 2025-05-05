@interface SFCollectionStyleGrid : SFCollectionStyle
@property (nonatomic) Q numberOfColumns;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q initiallyVisibleCardSectionCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (unsigned long long)numberOfColumns;
- (void)setNumberOfColumns:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (BOOL)hasNumberOfColumns;
+ (BOOL)supportsSecureCoding;
@end
