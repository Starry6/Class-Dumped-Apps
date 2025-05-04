@interface AWEFormatAISearchCardViewModel : NSObject
@property (nonatomic) NSDictionary attachmentDict;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> cachalotViewModel;
- (id)initWithCachalotViewModel:;
- (void)trackSearchCardDisplay;
- (void)openFormat:index:;
- (void)trackSearchCardCellDisplay:index:;
- (void)p_postCopedNotification;
- (id)cachalotViewModel;
- (id)p_secondLevelLogData:;
- (id)p_searchTrackCommonParams;
- (id)p_uniqKeyForFormatCard:;
- (id)p_searchBizContext;
- (id)p_thirdLevelLogDataWithIndex:;
- (id)p_formatTrackCommonParamsWithFormatInfo:;
- (BOOL)p_hasOpenSchema:;
- (void)p_setEnterRecord:;
- (void)setCachalotViewModel:;
- (id)attachmentDict;
- (void)setAttachmentDict:;
- (void).cxx_destruct;
@end
