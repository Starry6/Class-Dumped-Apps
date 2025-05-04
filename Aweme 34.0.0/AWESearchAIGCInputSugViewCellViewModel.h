@interface AWESearchAIGCInputSugViewCellViewModel : NSObject
@property (nonatomic) NSAttributedString titleAttributedString;
@property (nonatomic) AWESearchAIGCSugData sugData;
@property (nonatomic) q sugModelIndex;
@property (nonatomic) BOOL isLast;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) @? selectSugIcon;
- (void)setIsFirst:;
- (void)setIsLast:;
- (id)sugData;
- (long long)sugModelIndex;
- (void)setSugData:;
- (void)setSugModelIndex:;
- (void)setSelectSugIcon:;
- (id)selectSugIcon;
- (void).cxx_destruct;
- (BOOL)isFirst;
- (BOOL)isLast;
- (double)cellHeight;
- (id)titleAttributedString;
- (void)setTitleAttributedString:;
@end
