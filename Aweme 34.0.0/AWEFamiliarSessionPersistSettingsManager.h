@interface AWEFamiliarSessionPersistSettingsManager : NSObject
@property (nonatomic) BOOL isCFStoryNewStyle;
@property (nonatomic) BOOL shouldShowCommentObd;
@property (nonatomic) BOOL isMomentTabMigratedOnServerSide;
@property (nonatomic) q momentMigrationType;
@property (nonatomic) BOOL isPersistant;
@property (nonatomic) NSDictionary storage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)updateFamiliarSettings:fromRequest:;
- (BOOL)isCFStoryNewStyle;
- (long long)momentMigrationType;
- (BOOL)shouldShowCommentObd;
- (BOOL)isMomentTabMigratedOnServerSide;
- (BOOL)isPersistant;
- (void)setIsPersistant:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
