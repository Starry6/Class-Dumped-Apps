@interface AVRoutingConfiguration : NSObject
@property (nonatomic) NSString outputContextID;
@property (nonatomic) Q sharingPolicy;
- (BOOL)isDefault;
- (unsigned long long)sharingPolicy;
- (id)outputContextID;
- (void).cxx_destruct;
+ (id)defaultConfiguration;
+ (id)configurationWithOutputContextID:sharingPolicy:;
@end
