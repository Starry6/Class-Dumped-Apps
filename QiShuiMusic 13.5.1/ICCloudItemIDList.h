@interface ICCloudItemIDList : NSObject
@property (nonatomic) Q count;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)copyWithZone:;
- (void)addGlobalPlaylistID:;
- (void)addCloudItemID:idType:;
- (void)insertCloudItemID:idType:atIndex:;
- (void)enumerateCloudItemIDsUsingBlock:;
+ (BOOL)supportsSecureCoding;
@end
