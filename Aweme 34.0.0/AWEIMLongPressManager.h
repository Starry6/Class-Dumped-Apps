@interface AWEIMLongPressManager : NSObject
@property (nonatomic) <AWEIMAwemeMediaDownloaderProtocol> downloader;
@property (nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> longPressVC;
@property (nonatomic) AWEIMLongPressIMAwemeManager imLongPressManager;
@property (nonatomic) AWEIMLongPressFeedAwemeManager feedLongPressManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)longPressVC;
- (void)setLongPressVC:;
- (id)imLongPressManager;
- (void)setImLongPressManager:;
- (id)feedLongPressManager;
- (void)handleLongPressWithAwemeModel:message:sceneType:;
- (void)setFeedLongPressManager:;
- (id)downloader;
- (void).cxx_destruct;
- (void)setDownloader:;
@end
