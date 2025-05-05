@interface UIKBKeyplaneChangeContext : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL sizeDidChange;
@property (nonatomic) BOOL splitWidthsChanged;
@property (nonatomic) BOOL selfSizingChanged;
@property (nonatomic) BOOL updateAssistantView;
@property (nonatomic) BOOL isSecureTextEntry;
- (BOOL)updateAssistantView;
- (void)setSplitWidthsChanged:;
- (BOOL)splitWidthsChanged;
- (BOOL)selfSizingChanged;
- (void)setIsSecureTextEntry:;
- (BOOL)sizeDidChange;
- (void)setUpdateAssistantView:;
- (void)setSelfSizingChanged:;
- (void)setSize:;
- (BOOL)isSecureTextEntry;
- (id)size;
+ (id)keyplaneChangeContext;
+ (id)keyplaneChangeContextWithSize:;
@end
