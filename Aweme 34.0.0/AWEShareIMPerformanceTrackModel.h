@interface AWEShareIMPerformanceTrackModel : NSObject
@property (nonatomic) double clickSendShareButtonTimeInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double clickShareButtonTimeInterval;
@property (nonatomic) double startShowSharePanelTimeInterval;
@property (nonatomic) double didReceiveIMContactListTimeInterval;
@property (nonatomic) double didReceiveUserActiveTimeInterval;
@property (nonatomic) double startRenderIMContactTimeInterval;
@property (nonatomic) double clickSendShareButtonTimeInterval;
- (double)clickSendShareButtonTimeInterval;
- (void)setClickSendShareButtonTimeInterval:;
- (void)setClickShareButtonTimeInterval:;
- (double)clickShareButtonTimeInterval;
- (void)setStartRenderIMContactTimeInterval:;
- (void)setStartShowSharePanelTimeInterval:;
- (void)setDidReceiveIMContactListTimeInterval:;
- (void)setDidReceiveUserActiveTimeInterval:;
- (double)startShowSharePanelTimeInterval;
- (double)didReceiveIMContactListTimeInterval;
- (double)didReceiveUserActiveTimeInterval;
- (double)startRenderIMContactTimeInterval;
@end
