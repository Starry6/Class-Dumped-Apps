@interface AWEProfileCoverManager : NSObject
@property (nonatomic) Q source;
@property (nonatomic) @? uploadImageCompleteBlock;
@property (nonatomic) BOOL isCounted;
@property (nonatomic) BOOL alreadySet;
@property (nonatomic) BOOL isTopVideoFullScreen;
- (BOOL)isTopVideoFullScreen;
- (BOOL)alreadySet;
- (void)setAlreadySet:;
- (void)alreadySetCover;
- (void)uploadCoverWithImage:;
- (void)userLogout;
- (void)setIsTopVideoFullScreen:;
- (BOOL)hideProfileCoverTip;
- (void)selectCoverWithSelectedBlock:uploadImageCompleteBlock:trackParams:;
- (void)setUploadImageCompleteBlock:;
- (id)drawTransparentImage;
- (void)uploadCoverWithImage:trackParams:;
- (id)uploadImageCompleteBlock;
- (BOOL)showProfileCoverTip;
- (void)profileCoverTipCounted;
- (void)selectCoverWithSelectedBlock:trackParams:;
- (void).cxx_destruct;
- (unsigned long long)source;
- (void)setSource:;
- (BOOL)isCounted;
- (void)setIsCounted:;
+ (id)sharedInstance;
@end
