@interface AWEIMDefaultLandingToMessageTabTrackerModel : NSObject
@property (nonatomic) BOOL enableCheckPreUnreadCount;
@property (nonatomic) BOOL enableCheckPush;
@property (nonatomic) NSInteger preUnreadCount;
@property (nonatomic) NSInteger pushCount;
- (void)setEnableCheckPush:;
- (void)setEnableCheckPreUnreadCount:;
- (BOOL)enableCheckPreUnreadCount;
- (void)setPreUnreadCount:;
- (BOOL)enableCheckPush;
- (int)preUnreadCount;
- (int)pushCount;
- (void)setPushCount:;
@end
