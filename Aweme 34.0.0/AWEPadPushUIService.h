@interface AWEPadPushUIService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adaptEnable;
- (void)updateFrame:height:isDismissing:;
- (id)createCornerLayerWithView:height:isPushFromBottom:;
- (void)setHidedFrame:height:;
- (double)pushViewCommonHeight;
- (double)pushViewCommonWidth;
- (id)pushViewHidedFrameValueWithHeight:;
- (id)pushViewShownFrameValueWithHeight:;
- (void)performBlock:;
@end
