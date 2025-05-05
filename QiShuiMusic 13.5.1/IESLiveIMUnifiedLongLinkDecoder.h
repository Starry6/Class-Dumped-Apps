@interface IESLiveIMUnifiedLongLinkDecoder : NSObject
@property (nonatomic) <IESLiveIMDecoder> nextDecoder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNextDecoder:;
- (void)decode:completion:;
- (void)handleOutPacket:withDownlinkPacket:;
- (id)nextDecoder;
- (void).cxx_destruct;
@end
