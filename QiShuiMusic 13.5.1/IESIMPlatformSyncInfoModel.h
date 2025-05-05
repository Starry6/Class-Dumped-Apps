@interface IESIMPlatformSyncInfoModel : MTLModel
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
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)platformName;
- (void)setNickname:;
- (void)setPlatformName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
