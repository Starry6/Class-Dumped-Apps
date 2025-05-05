@interface NSExtensionURLResult : NSObject
@property (nonatomic) NSURL url;
- (void)signal;
- (id)url;
- (id)init;
- (void)dealloc;
- (BOOL)wait:;
- (void)setURL:;
- (id)copiedURL;
@end
