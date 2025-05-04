@interface AWELiveAudienceInnerRoomModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) @? enterRoomBlock;
@property (nonatomic) <AWELiveExpoundCardVC> expoundCardVC;
- (id)expoundCardVC;
- (void)setExpoundCardVC:;
- (void)setEnterRoomBlock:;
- (id)enterRoomBlock;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
