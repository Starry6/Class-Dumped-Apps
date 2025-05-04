@interface AWEFlowerRedPacketViewModel : NSObject
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) @? redPacketMsgHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)receiveOutOrderId:redPacketId:couponId:redPacketNum:extra:completion:;
- (void)setRedPacketMsgHandler:;
- (id)redPacketMsgHandler;
- (id)repository;
- (void).cxx_destruct;
- (void)setRepository:;
@end
