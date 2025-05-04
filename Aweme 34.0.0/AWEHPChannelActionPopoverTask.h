@interface AWEHPChannelActionPopoverTask : NSObject
@property (nonatomic) NSArray actions;
@property (nonatomic) BOOL preferDarkTheme;
@property (nonatomic) @? showCallback;
- (id)showCallback;
- (void)setShowCallback:;
- (BOOL)preferDarkTheme;
- (void)setPreferDarkTheme:;
- (id)init;
- (id)actions;
- (id)description;
- (void).cxx_destruct;
- (void)setActions:;
- (id)copyWithZone:;
@end
