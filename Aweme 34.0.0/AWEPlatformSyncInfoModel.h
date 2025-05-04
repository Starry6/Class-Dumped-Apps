@interface AWEPlatformSyncInfoModel : MTLModel
@property (nonatomic) NSString platformName;
@property (nonatomic) NSString nickname;
@property (nonatomic) BOOL fullSynced;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)fullSynced;
- (void)setFullSynced:;
- (id)nickname;
- (id)platformName;
- (void).cxx_destruct;
- (id)initWithDict:;
- (void)setNickname:;
- (void)setPlatformName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
