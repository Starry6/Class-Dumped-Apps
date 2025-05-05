@interface IESLiveSaaSOutRoomPlayModel : NSObject
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSString anchorName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString coverURL;
- (void)setTrackParams:;
- (id)anchorName;
- (id)roomId;
- (void)setAnchorName:;
- (void)setRoomId:;
- (id)trackParams;
- (id)requestId;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setRequestId:;
- (void)setStreamURL:;
- (id)getStreamURL;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)transferFromRoomModel:pageContext:;
@end
