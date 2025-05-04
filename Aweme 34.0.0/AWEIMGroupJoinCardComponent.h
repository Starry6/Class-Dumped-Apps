@interface AWEIMGroupJoinCardComponent : AWEIMFlexComponent
@property (nonatomic) BOOL isSocialGroup;
@property (nonatomic) BOOL isPublicGroup;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPublicGroup;
- (void)setIsPublicGroup:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)setIsSocialGroup:;
- (void)updateGroupJoinCardPresenterModel:;
- (id)getGroupJoinCardPresenterModel;
- (void)updatePresenterWhenHasBackgroundWithProps:;
- (void)didTapFunctionCellWithModel:;
- (void)willDisplayFunctionCellWithModel:;
- (void)trackerWithModel:conversation:;
- (id)checkEntryEnableAndTrackWithModel:conversation:;
- (void)adaptNoticeBackground;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (BOOL)isSocialGroup;
- (void)deleteMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
