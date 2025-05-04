@interface AWEShareToStoryModel : AWEBaseApiModel
@property (nonatomic) NSString shareToStoryType;
@property (nonatomic) BOOL isOpenPlatform;
@property (nonatomic) NSString openPlatformKey;
@property (nonatomic) NSString shareText;
- (id)shareToStoryType;
- (id)openPlatformKey;
- (void)setOpenPlatformKey:;
- (void)setShareToStoryType:;
- (BOOL)isOpenPlatform;
- (void)setIsOpenPlatform:;
- (void).cxx_destruct;
- (id)shareText;
- (void)setShareText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
