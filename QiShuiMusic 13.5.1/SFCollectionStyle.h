@interface SFCollectionStyle : NSObject
@property (nonatomic) Q initiallyVisibleCardSectionCount;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (unsigned long long)initiallyVisibleCardSectionCount;
- (void)setInitiallyVisibleCardSectionCount:;
- (BOOL)hasInitiallyVisibleCardSectionCount;
+ (BOOL)supportsSecureCoding;
@end
