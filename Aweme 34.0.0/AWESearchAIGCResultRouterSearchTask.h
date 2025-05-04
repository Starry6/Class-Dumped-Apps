@interface AWESearchAIGCResultRouterSearchTask : NSObject
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) NSString clientServerExtra;
@property (nonatomic) BOOL needSend;
@property (nonatomic) AWESearchAIGCVideoInfo videoInfo;
@property (nonatomic) AWESearchAIGCImageInfo imageInfo;
@property (nonatomic) NSString searchUniqueID;
@property (nonatomic) NSString searchDedupKey;
- (id)videoInfo;
- (void)setVideoInfo:;
- (id)searchKeyword;
- (id)initWithRouterParams:;
- (id)clientServerExtra;
- (id)searchUniqueID;
- (id)searchDedupKey;
- (BOOL)needSend;
- (void)setNeedSend:;
- (void).cxx_destruct;
- (id)imageInfo;
- (void)setImageInfo:;
@end
