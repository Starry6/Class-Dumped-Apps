@interface AWERecordSelectMusicLayoutAction : NSObject
@property (nonatomic) AWERecordSelectMusicViewHolder viewHolder;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
- (id)viewHolder;
- (void)setViewHolder:;
- (id)initWithViewHolder:viewContainer:;
- (void)addSelectMusicButtonIfNeeded;
- (void)updateMusicSelectButtonWithShowCloseButton:;
- (void)fixLayout;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
