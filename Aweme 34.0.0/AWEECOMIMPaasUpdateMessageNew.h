@interface AWEECOMIMPaasUpdateMessageNew : NSObject
@property (nonatomic) BDECPigeonUpdateMessage updateMessage;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString vid;
@property (nonatomic) NSString videoCoverUrl;
@property (nonatomic) NSNumber statusNumber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoCoverUrl;
- (void)setVideoCoverUrl:;
- (id)statusNumber;
- (void)setStatusNumber:;
- (id)convertToPigeonUpdateMessage;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)updateMessage;
- (void)setVid:;
- (id)vid;
- (void)setUpdateMessage:;
@end
