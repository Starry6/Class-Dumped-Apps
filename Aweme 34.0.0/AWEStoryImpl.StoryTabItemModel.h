@interface AWEStoryImpl.StoryTabItemModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) Q count;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) NSString redDotAccessibilityText;
- (BOOL)showRedDot;
- (void)setShowRedDot:;
- (id)redDotAccessibilityText;
- (void)setRedDotAccessibilityText:;
- (id)init;
- (void)setCount:;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setShowLock:;
- (BOOL)showLock;
@end
