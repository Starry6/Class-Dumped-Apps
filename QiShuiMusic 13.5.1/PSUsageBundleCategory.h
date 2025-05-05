@interface PSUsageBundleCategory : NSObject
@property (nonatomic) PSUsageBundleApp usageBundleApp;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
- (void)setName:;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setIdentifier:;
- (id)usageBundleApp;
- (void)setUsageBundleApp:;
+ (id)categoryNamed:withIdentifier:forUsageBundleApp:;
@end
