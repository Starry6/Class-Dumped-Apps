@interface AWEIMShareMutiselectViewControllerUIConfig : NSObject
@property (nonatomic) NSAttributedString titleAttributedText;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL isFromSharePanel;
- (id)titleAttributedText;
- (void)setTitleAttributedText:;
- (void)setIsBGColorWhite:;
- (BOOL)isBGColorWhite;
- (BOOL)isFromSharePanel;
- (void)setIsFromSharePanel:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
@end
