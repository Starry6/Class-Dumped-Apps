@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject
@property (nonatomic) NSString serverInstance;
@property (nonatomic) NSDictionary tokenResults;
- (id)initWithResponseDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)serverInstance;
- (id)tokenResults;
- (id)tokenResultForAccountDSID:;
@end
