@interface AWETeenProfileCoverManager : NSObject
@property (nonatomic) Q source;
@property (nonatomic) BOOL isCounted;
@property (nonatomic) BOOL alreadySet;
@property (nonatomic) BOOL isTopVideoFullScreen;
- (BOOL)isTopVideoFullScreen;
- (BOOL)alreadySet;
- (void)setAlreadySet:;
- (void)alreadySetCover;
- (BOOL)useCreativeAlbumKit;
- (void)uploadCoverWithImage:;
- (void)userLogout;
- (void)selectCoverWithSelectedBlock:;
- (void)setIsTopVideoFullScreen:;
- (unsigned long long)source;
- (void)setSource:;
- (BOOL)isCounted;
- (void)setIsCounted:;
+ (id)sharedInstance;
@end
