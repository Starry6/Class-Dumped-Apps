@interface AWEIMConversationAceeptMenuItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isHighlight;
@property (nonatomic) BOOL isHandling;
@property (nonatomic) @? actionBlock;
- (void)setIsHandling:;
- (BOOL)isHandling;
- (void)setIsHighlight:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setActionBlock:;
- (id)actionBlock;
- (BOOL)isHighlight;
@end
