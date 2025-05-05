@interface FBSApplicationUninstallOptions : NSObject
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL showsArchiveOption;
- (void)setUserInitiated:;
- (BOOL)isUserInitiated;
- (BOOL)showsArchiveOption;
- (void)setShowsArchiveOption:;
+ (id)userInitiated;
@end
