@interface AWEIMPoiRelatedMessageUpdateInfoModel : MTLModel
@property (nonatomic) NSArray coverUrls;
@property (nonatomic) NSString title;
@property (nonatomic) AWEIMShareSubInfoModel subInfo;
@property (nonatomic) q activeStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subInfo;
- (void)setSubInfo:;
- (id)coverUrls;
- (void)setCoverUrls:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)activeStatus;
- (void)setActiveStatus:;
+ (id)JSONKeyPathsByPropertyKey;
@end
