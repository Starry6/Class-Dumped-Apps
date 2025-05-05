@interface SSBagProfileConfig : NSObject
@property (nonatomic) NSDictionary bagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
@property (nonatomic) NSArray bagKeys;
- (id)init;
- (void)setProfileVersion:;
- (void)setProfile:;
- (id)profile;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)profileVersion;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)bagKeys;
- (id)bagKeyForStringRepresentation:;
- (double)bagLoadTimeout;
- (void)setBagLoadTimeout:;
- (id)bagKeysDictionary;
- (void)setBagKeysDictionary:;
@end
