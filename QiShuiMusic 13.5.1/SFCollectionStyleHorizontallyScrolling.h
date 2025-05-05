@interface SFCollectionStyleHorizontallyScrolling : SFCollectionStyle
@property (nonatomic) Q numberOfRows;
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
- (void)setNumberOfRows:;
- (unsigned long long)numberOfRows;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (BOOL)hasNumberOfRows;
+ (BOOL)supportsSecureCoding;
@end
