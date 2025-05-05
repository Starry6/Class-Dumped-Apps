@interface WBSPhishingUpdateConfiguration : NSObject
@property (nonatomic) NSString configurationName;
@property (nonatomic) NSString configurationVersion;
@property (nonatomic) double updateInterval;
- (id)initWithData:error:;
- (id)configurationName;
- (id)initWithDictionary:error:;
- (double)updateInterval;
- (id)configurationVersion;
- (void).cxx_destruct;
- (id)initWithURL:error:;
@end
