@interface AWEIMShareMoreSelectionMyGroupContext : NSObject
@property (nonatomic) IESIMShareMoreSelectionContext shareMoreSelectionContext;
@property (nonatomic) <AWEIMShareMoreSelectionMyGroupPanelDelegate> delegate;
@property (nonatomic) q tab;
@property (nonatomic) NSString inputText;
@property (nonatomic) BOOL inputTimestampIsSelected;
@property (nonatomic) NSArray currentBottomButtonTypes;
- (void)setTab:;
- (id)currentBottomButtonTypes;
- (void)setShareMoreSelectionContext:;
- (id)shareMoreSelectionContext;
- (void)setInputTimestampIsSelected:;
- (void)setCurrentBottomButtonTypes:;
- (BOOL)inputTimestampIsSelected;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)inputText;
- (void)setInputText:;
- (long long)tab;
@end
