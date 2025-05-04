@interface AWEProfileTopVideoHelper : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL isTopVideoFullScreen;
@property (nonatomic) BOOL isTopVideoDidEnterFullScreen;
- (BOOL)isTopVideoFullScreen;
- (void)setIsTopVideoFullScreen:;
- (BOOL)enableTopVideo;
- (BOOL)isTopVideoDidEnterFullScreen;
- (BOOL)isTopVideoEnterFullScreen;
- (BOOL)isLeavingFullScreen;
- (void)setIsTopVideoDidEnterFullScreen:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
@end
