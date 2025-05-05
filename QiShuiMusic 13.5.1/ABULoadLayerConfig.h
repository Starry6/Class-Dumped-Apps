@interface ABULoadLayerConfig : NSObject
@property (nonatomic) NSArray configList;
@property (nonatomic) NSDictionary loadParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configList;
- (id)loadParam;
- (void)setConfigList:;
- (void)setLoadParam:;
- (void).cxx_destruct;
+ (id)configWithConfigList:andParam:;
@end
