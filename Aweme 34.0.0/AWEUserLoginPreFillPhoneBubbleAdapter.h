@interface AWEUserLoginPreFillPhoneBubbleAdapter : NSObject
@property (nonatomic) AWEUserLoginPreFillPhoneBubbleModel bubbleModel;
@property (nonatomic) NSTimer timer;
@property (nonatomic) DUXPopover popover;
@property (nonatomic) NSDictionary trackInfo;
- (id)bubbleModel;
- (void)setBubbleModel:;
- (void)startBubbleWithModel:;
- (void)autoShowBubble;
- (void)trackAutoShowBubble;
- (id)popupNameWithStyle:;
- (void)setTimer:;
- (void)cancelTimer;
- (id)timer;
- (void)startTimer;
- (id)popover;
- (void).cxx_destruct;
- (void)setPopover:;
- (void)setTrackInfo:;
- (id)trackInfo;
- (void)cancelBubble;
@end
