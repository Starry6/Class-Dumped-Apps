@interface AWEPublishCoverModel : NSObject
@property (nonatomic) double coverTsp;
@property (nonatomic) BOOL blackFrameFlag;
@property (nonatomic) Q defaultCoverSource;
@property (nonatomic) q randomCheckFrameCount;
@property (nonatomic) NSString stickers;
@property (nonatomic) NSString templates;
@property (nonatomic) Q assignCoverType;
- (double)coverTsp;
- (void)setCoverTsp:;
- (unsigned long long)defaultCoverSource;
- (void)setDefaultCoverSource:;
- (void)setAssignCoverType:;
- (void)setBlackFrameFlag:;
- (long long)randomCheckFrameCount;
- (void)setRandomCheckFrameCount:;
- (BOOL)blackFrameFlag;
- (unsigned long long)assignCoverType;
- (id)templates;
- (void).cxx_destruct;
- (void)setTemplates:;
- (id)stickers;
- (void)setStickers:;
@end
