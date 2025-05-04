@interface AWEInputViewControllerRefreshFrameContext : NSObject
@property (nonatomic) NSNumber oldInputViewType;
@property (nonatomic) NSNumber updateInputViewType;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) BOOL emoticonLayoutAnimation;
- (void)setOldInputViewType:;
- (void)setUpdateInputViewType:;
- (id)oldInputViewType;
- (id)updateInputViewType;
- (BOOL)emoticonLayoutAnimation;
- (void)setEmoticonLayoutAnimation:;
- (BOOL)disableAnimation;
- (void).cxx_destruct;
- (void)setDisableAnimation:;
@end
