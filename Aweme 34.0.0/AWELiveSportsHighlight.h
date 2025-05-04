@interface AWELiveSportsHighlight : NSObject
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) UIImage downloadedImage;
@property (nonatomic) NSString remoteVideoURLString;
@property (nonatomic) NSURL remoteVideoDownloadURL;
@property (nonatomic) NSString currentPlayingURLKey;
@property (nonatomic) NSURL remoteImageDownloadURL;
@property (nonatomic) NSString multiTabID;
@property (nonatomic) NSString raceCollectionItemId;
- (void)setCurrentPlayingURLKey:;
- (id)currentPlayingURLKey;
- (id)remoteVideoDownloadURL;
- (id)remoteVideoURLString;
- (void)setRemoteVideoURLString:;
- (void)setRemoteVideoDownloadURL:;
- (id)remoteImageDownloadURL;
- (void)setRemoteImageDownloadURL:;
- (void)setRaceCollectionItemId:;
- (void)setMultiTabID:;
- (id)multiTabID;
- (id)raceCollectionItemId;
- (id)destinationURL;
- (void).cxx_destruct;
- (void)setDestinationURL:;
- (id)downloadedImage;
- (void)setDownloadedImage:;
@end
