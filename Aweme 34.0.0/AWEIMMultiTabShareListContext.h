@interface AWEIMMultiTabShareListContext : NSObject
@property (nonatomic) @? sendBlock;
@property (nonatomic) NSString panelTitle;
@property (nonatomic) NSArray dataTabArray;
@property (nonatomic) BOOL isMultiMode;
- (id)panelTitle;
- (void)setPanelTitle:;
- (BOOL)isMultiMode;
- (id)dataTabArray;
- (void)setDataTabArray:;
- (void)setIsMultiMode:;
- (void).cxx_destruct;
- (id)sendBlock;
- (void)setSendBlock:;
@end
