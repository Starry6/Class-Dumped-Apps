@interface AWEStudioFollowShootNodeModel : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString hashTagNameList;
@property (nonatomic) NSString musicID;
@property (nonatomic) NSString propList;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)musicID;
- (void)setMusicID:;
- (id)propList;
- (void)setPropList:;
- (void)setHashTagNameList:;
- (void)clearAllInfo;
- (BOOL)isNullNode;
- (id)hashTagNameList;
- (void)setVideoId:;
- (void).cxx_destruct;
- (id)videoId;
- (id)authorID;
- (void)setAuthorID:;
@end
