@interface UIWebPDFLinkAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger type;
@property (nonatomic) @? handler;
- (void)dealloc;
- (void)setType:;
- (void)setHandler:;
- (void)setTitle:;
- (id)handler;
- (int)type;
- (id)title;
@end
