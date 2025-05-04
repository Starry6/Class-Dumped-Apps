@interface AWESearchMusicSortTabAndPlayAllHeaderCard : UIView
@property (nonatomic) AWESearchMusicSortTabViewCell sortTabCell;
@property (nonatomic) AWESearchMusicPlayAllViewCell playAllCell;
@property (nonatomic) AWESearchCachalotResultContext cachalotContext;
@property (nonatomic) AWESearchMusicHeaderInfoModel bindModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cachalotContext;
- (void)setCachalotContext:;
- (id)bindModel;
- (id)contentInfoView;
- (void)setBindModel:;
- (void)p_addContentCell;
- (id)sortTabCell;
- (id)playAllCell;
- (void)setSortTabCell:;
- (void)setPlayAllCell:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:;
+ (id)sizeWithViewModel:width:;
@end
