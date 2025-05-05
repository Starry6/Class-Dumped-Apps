@interface AVAudioSessionDataSourceDescription : NSObject
@property (nonatomic) NSNumber dataSourceID;
@property (nonatomic) NSString dataSourceName;
@property (nonatomic) NSString location;
@property (nonatomic) NSString orientation;
@property (nonatomic) NSArray supportedPolarPatterns;
@property (nonatomic) NSString selectedPolarPattern;
@property (nonatomic) NSString preferredPolarPattern;
- (id)initWithSessionID:;
- (void)dealloc;
- (BOOL)privateMatchesRawDescription:;
- (BOOL)setPreferredPolarPattern:error:;
- (id)orientation;
- (unsigned long long)hash;
- (id)selectedPolarPattern;
- (id)dataSourceID;
- (id)location;
- (id)initWithRawSourceDescription:andOwningPortID:andSessionID:;
- (id)supportedPolarPatterns;
- (id)dataSourceName;
- (void)configurePolarPatterns:;
- (id)description;
- (id)privateGetOwningPortID;
- (id)preferredPolarPattern;
- (id)privateGetImplementation;
- (BOOL)isEqualToDataSource:;
- (BOOL)isEqual:;
+ (id)privateCreateArray:portID:sessionID:;
@end
