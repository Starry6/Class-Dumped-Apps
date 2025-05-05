@interface InterAppAudioApp : NSObject
@property (nonatomic) q key;
@property (nonatomic) NSString name;
@property (nonatomic) UIImage icon;
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL isHost;
@property (nonatomic) BOOL isCurrentApp;
@property (nonatomic) BOOL isForeground;
- (id)url;
- (void)dealloc;
- (BOOL)isForeground;
- (id)icon;
- (long long)key;
- (id)description;
- (id)name;
- (id)init:iconSize:;
- (BOOL)processRunningOnForeground:;
- (BOOL)isHost;
- (BOOL)isCurrentApp;
@end
