@interface DESInternalDodMLTask : NSObject
@property (nonatomic) DESRecipe recipe;
@property (nonatomic) DESRecordSet matchingRecordSet;
@property (nonatomic) NSURL baseURL;
@property (nonatomic) NSString localeIdentifier;
@property (nonatomic) NSString testingRecipePath;
@property (nonatomic) DESUploadTransport uploadTransport;
- (id)baseURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)recipe;
- (id)localeIdentifier;
- (id)copyWithZone:;
- (id)matchingRecordSet;
- (id)testingRecipePath;
- (id)initWithRecipe:matchingRecordSet:baseURL:localIdentifier:recipePath:uploadTransport:;
- (id)uploadTransport;
+ (BOOL)supportsSecureCoding;
@end
