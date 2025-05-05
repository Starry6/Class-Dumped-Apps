@interface ICMusicKitTokensResponse : NSObject
@property (nonatomic) NSString developerToken;
@property (nonatomic) NSString userToken;
@property (nonatomic) NSError userTokenFetchingError;
- (id)userToken;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDeveloperToken:userToken:userTokenFetchingError:;
- (id)_descriptionOfToken:forDebugging:;
- (id)_descriptionForDebugging:;
- (id)developerToken;
- (id)userTokenFetchingError;
+ (BOOL)supportsSecureCoding;
@end
