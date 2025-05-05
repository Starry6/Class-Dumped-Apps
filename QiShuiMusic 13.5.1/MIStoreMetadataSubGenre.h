@interface MIStoreMetadataSubGenre : NSObject
@property (nonatomic) NSString genre;
@property (nonatomic) NSNumber genreID;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)genre;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setGenre:;
- (id)genreID;
- (void)setGenreID:;
- (id)initWithGenre:genreID:;
+ (BOOL)supportsSecureCoding;
@end
