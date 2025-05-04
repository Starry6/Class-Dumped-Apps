@interface AWEIMGroupOwnerMessagesListRichMsgCollectionViewCell : AWEIMGroupOwnerMessagesListCollectionViewCell
@property (nonatomic) YYLabel contentLabel;
- (void)renderCustomizeContentWithVM:;
- (void)tryBuildTruncationToken;
- (void)__buildFoldTruncationToken;
- (id)__unfoldTruncationToken;
- (id)__buildTrunctionTokenWithTokenText:;
- (void)didClickToken;
- (void)foldCell;
- (void)unfoldCell;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:;
+ (id)highlightTokenAttributes;
+ (id)identifier;
@end
