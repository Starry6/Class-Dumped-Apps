@interface IESLiveLinkRTCInteractVideoCanvas : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) Q renderMode;
@property (nonatomic) NSString roomId;
@property (nonatomic) NSString uid;
@property (nonatomic) q backgroundColor;
- (id)roomId;
- (void)setRoomId:;
- (void)setBackgroundColor:;
- (id)uid;
- (long long)backgroundColor;
- (void)setUid:;
- (void)setRenderMode:;
- (id)view;
- (unsigned long long)renderMode;
- (void).cxx_destruct;
- (void)setView:;
@end
