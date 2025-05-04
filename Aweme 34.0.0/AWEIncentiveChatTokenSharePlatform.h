@interface AWEIncentiveChatTokenSharePlatform : NSObject
@property (nonatomic) q platform;
@property (nonatomic) BOOL isExternalShare;
@property (nonatomic) NSString shareName;
@property (nonatomic) NSString shareGuideName;
@property (nonatomic) NSArray guideConfirmBackgroundColors;
@property (nonatomic) UIImage shareImage;
@property (nonatomic) UIImage guideConfirmImage;
@property (nonatomic) NSString trackName;
- (id)shareImage;
- (id)shareGuideName;
- (id)guideConfirmImage;
- (id)guideConfirmBackgroundColors;
- (void)openAppWithCompletion:;
- (BOOL)isExternalShare;
- (id)initWithPlatform:;
- (long long)platform;
- (id)trackName;
- (id)shareName;
@end
