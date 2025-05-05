@interface MSRenderHelper : NSObject
@property (nonatomic) ^v key;
- (void)handleBecomeActiveNotification:;
- (void)dealloc;
- (id)key;
- (void)setKey:;
- (id)initWithKey:;
+ (id)renderWithKey:;
@end
