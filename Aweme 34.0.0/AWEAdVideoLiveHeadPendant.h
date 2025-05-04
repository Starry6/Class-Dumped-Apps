@interface AWEAdVideoLiveHeadPendant : MTLModel
@property (nonatomic) NSString pendantText;
@property (nonatomic) NSString pendantIcon;
@property (nonatomic) NSString pendantBackground;
@property (nonatomic) NSNumber pendantShowSeconds;
@property (nonatomic) AWEAdVideoLiveHeadPendantQponInfo qponInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pendantIcon;
- (id)pendantText;
- (id)pendantBackground;
- (void)setPendantText:;
- (void)setPendantIcon:;
- (id)qponInfo;
- (void)setPendantBackground:;
- (id)pendantShowSeconds;
- (void)setPendantShowSeconds:;
- (void)setQponInfo:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
