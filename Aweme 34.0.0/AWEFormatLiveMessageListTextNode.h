@interface AWEFormatLiveMessageListTextNode : HTSLiveMessageListNode
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) AWEFormatLiveMessageListLoadingView loadingView;
- (void)removeLoading;
- (BOOL)isValidFoldNode;
- (BOOL)isValidNode;
- (id)init;
- (BOOL)isLoading;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setIsLoading:;
- (BOOL)shouldShow;
- (void)setShouldShow:;
@end
