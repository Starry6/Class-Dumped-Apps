@interface IESECEcLiveGlobalInfoDataModel : IESLiveBridgeModel
@property (nonatomic) NSString authorId;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString secAuthorId;
@property (nonatomic) BOOL isFollowed;
@property (nonatomic) NSString ecomLiveParams;
@property (nonatomic) NSString ecomSceneId;
@property (nonatomic) NSString liveListChannel;
@property (nonatomic) NSDictionary reportParams;
- (void)setEcomSceneId:;
- (void)setSecAuthorId:;
- (id)liveListChannel;
- (id)ecomLiveParams;
- (id)ecomSceneId;
- (BOOL)isFollowed;
- (id)reportParams;
- (id)roomId;
- (id)secAuthorId;
- (void)setEcomLiveParams:;
- (void)setIsFollowed:;
- (void)setLiveListChannel:;
- (void)setReportParams:;
- (void)setRoomId:;
- (void).cxx_destruct;
- (id)authorId;
- (void)setAuthorId:;
+ (id)modelCustomPropertyMapper;
@end
