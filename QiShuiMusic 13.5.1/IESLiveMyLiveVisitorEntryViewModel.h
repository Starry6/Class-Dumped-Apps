@interface IESLiveMyLiveVisitorEntryViewModel : NSObject
@property (nonatomic) IESLiveProfileUpperArea metaData;
@property (nonatomic) NSMutableDictionary itemShownDic;
@property (nonatomic) HTSLiveMyLiveCarouselItem_CarouselItem currentDisplayItem;
@property (nonatomic) HTSLiveLynxContainer lynxContainer;
- (id)commonParamsForItem:;
- (id)currentDisplayItem;
- (id)initWithMetaData:diContext:;
- (id)itemShownDic;
- (id)lynxContainer;
- (void)setCurrentDisplayItem:;
- (void)setItemShownDic:;
- (void)setLynxContainer:;
- (void)trackClickCurrentItem;
- (void)trackCurrentItemShow;
- (void)setMetaData:;
- (id)metaData;
- (void).cxx_destruct;
@end
