@interface SSMutableBagProfileConfig : SSBagProfileConfig
@property (nonatomic) NSMutableDictionary mutableBagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (nonatomic) NSString profile;
@property (nonatomic) NSString profileVersion;
- (id)init;
- (void).cxx_destruct;
- (id)bagKeysDictionary;
- (void)registerBagKey:valueType:;
- (void)registerBagKey:valueType:defaultValue:;
- (id)mutableBagKeysDictionary;
- (void)setMutableBagKeysDictionary:;
@end
