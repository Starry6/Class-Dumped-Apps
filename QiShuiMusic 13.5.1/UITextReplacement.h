@interface UITextReplacement : NSObject
@property (nonatomic) UITextRange range;
@property (nonatomic) NSString originalText;
@property (nonatomic) NSString replacementText;
@property (nonatomic) NSString menuTitle;
@property (nonatomic) @? replacementCompletionBlock;
@property (nonatomic) I usageTrackingMask;
- (id)replacementText;
- (id)originalText;
- (id)menuTitle;
- (id)range;
- (void).cxx_destruct;
- (unsigned int)usageTrackingMask;
- (void)setUsageTrackingMask:;
- (void)didReplaceTextWithTarget:;
- (BOOL)_isNoReplacementsFoundItem;
- (id)replacementCompletionBlock;
- (void)setReplacementCompletionBlock:;
+ (id)replacementWithRange:original:replacement:menuTitle:;
@end
