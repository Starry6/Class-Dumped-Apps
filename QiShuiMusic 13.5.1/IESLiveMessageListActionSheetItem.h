@interface IESLiveMessageListActionSheetItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) @? show;
@property (nonatomic) @? gray;
@property (nonatomic) @? click;
@property (nonatomic) @? prepareDisplaySync;
@property (nonatomic) @? onStartPrepareAsyncDisplay;
@property (nonatomic) Q itemType;
- (id)onStartPrepareAsyncDisplay;
- (id)prepareDisplaySync;
- (void)setClick:;
- (void)setGray:;
- (void)setOnStartPrepareAsyncDisplay:;
- (void)setPrepareDisplaySync:;
- (void)setItemType:;
- (void)setTitle:;
- (id)show;
- (unsigned long long)itemType;
- (id)title;
- (void).cxx_destruct;
- (void)setShow:;
- (id)click;
- (id)gray;
@end
