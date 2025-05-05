@interface BU_IESGurdPackagesConfigRequest : NSObject
@property (nonatomic) NSDictionary targetChannelsDictionary;
@property (nonatomic) NSDictionary targetVersionDictionary;
@property (nonatomic) NSDictionary groupNamesDictionary;
@property (nonatomic) NSString businessDomain;
@property (nonatomic) NSDictionary customParams;
- (id)businessDomain;
- (id)customParams;
- (id)groupNamesDictionary;
- (void)setBusinessDomain:;
- (void)setCustomParams:;
- (void)setGroupNamesDictionary:;
- (void)setTargetChannelsDictionary:;
- (void)setTargetVersionDictionary:;
- (id)targetChannelsDictionary;
- (id)targetVersionDictionary;
- (void).cxx_destruct;
+ (id)requestWithAccessKey:channels:customParams:;
@end
