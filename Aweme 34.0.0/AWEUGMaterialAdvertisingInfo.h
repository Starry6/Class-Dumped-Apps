@interface AWEUGMaterialAdvertisingInfo : NSObject
@property (nonatomic) NSString originURLString;
@property (nonatomic) q code;
@property (nonatomic) NSString scheme;
@property (nonatomic) BOOL isJumpPopview;
@property (nonatomic) NSDictionary guidePopup;
@property (nonatomic) BOOL isFallbackScheme;
@property (nonatomic) q continueType;
@property (nonatomic) NSDictionary popupsInfo;
- (id)originURLString;
- (id)guidePopup;
- (void)setGuidePopup:;
- (void)setOriginURLString:;
- (BOOL)isJumpPopview;
- (id)popupsInfo;
- (long long)continueType;
- (BOOL)isFallbackScheme;
- (void)setIsJumpPopview:;
- (void)setIsFallbackScheme:;
- (void)setContinueType:;
- (void)setPopupsInfo:;
- (id)scheme;
- (void)setScheme:;
- (long long)code;
- (void)setCode:;
- (void).cxx_destruct;
@end
