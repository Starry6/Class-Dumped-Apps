@interface AWEHPTopTabEditPanelItemModel : NSObject
@property (nonatomic) NSString channelID;
@property (nonatomic) NSString title;
@property (nonatomic) Q dragType;
- (void)setDragType:;
- (BOOL)itemCanMove;
- (void)setChannelID:;
- (id)channelID;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (unsigned long long)dragType;
@end
