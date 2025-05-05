@interface LMTrial : NSObject
@property (nonatomic) <LMTrialDataSource> dataSource;
- (id)init;
- (void)handleUpdatedTrialParameters:forLocaleIdentifier:;
- (void)start;
- (id)initWithDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)encodedTrialParametersForLocale:;
+ (id)sharedInstance;
+ (id)encodeTrialParameters:;
@end
