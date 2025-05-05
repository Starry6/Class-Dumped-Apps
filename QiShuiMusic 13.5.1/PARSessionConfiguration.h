@interface PARSessionConfiguration : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString userAgent;
@property (nonatomic) <PARResultFactory> factory;
@property (nonatomic) BOOL dontPreloadImages;
@property (nonatomic) BOOL enablePersonalizedRanking;
@property (nonatomic) BOOL parsecEnabled;
- (id)userAgent;
- (id)factory;
- (id)init;
- (id)identifier;
- (BOOL)dontPreloadImages;
- (BOOL)parsecEnabled;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithId:userAgent:;
- (id)initWithId:userAgent:factory:;
- (void)setDontPreloadImages:;
- (void).cxx_destruct;
- (BOOL)enablePersonalizedRanking;
- (id)description;
- (void)setParsecEnabled:;
- (void)setEnablePersonalizedRanking:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultSessionConfiguration;
@end
