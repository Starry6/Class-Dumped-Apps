@interface AWEHotSearchExpandRelatedSpotModel : NSObject
@property (nonatomic) NSString mainHotSpotWordForEntryWord;
@property (nonatomic) NSString relatedHotSpotWord;
@property (nonatomic) NSNumber type;
@property (nonatomic) q videoItemID;
- (id)relatedHotSpotWord;
- (void)setRelatedHotSpotWord:;
- (void)setMainHotSpotWordForEntryWord:;
- (id)mainHotSpotWordForEntryWord;
- (void)setVideoItemID:;
- (long long)videoItemID;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
@end
