@interface AWERelationBottomBubbleView : AWEUINotificationBarView
@property (nonatomic) AWEHotsoonRegularBarModel model;
@property (nonatomic) Q scene;
- (void)showOnView:bottomOffset:;
- (void)enterURL:;
- (id)initWithModel:scene:complete:;
- (void)setModel:;
- (void)setScene:;
- (unsigned long long)scene;
- (void)dismiss;
- (id)model;
- (void).cxx_destruct;
+ (id)hotsoomImage;
@end
