@interface AWEPlayInteractionPushDislikeElementManager : NSObject
@property (nonatomic) NSNumber ignoreCount;
@property (nonatomic) NSString lastIgnoreAwemeID;
@property (nonatomic) NSDictionary pushUserInfo;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (void)onPushDislikeElementShow:;
- (void)onClickPushDislikeElement:isDislike:;
- (id)lastIgnoreAwemeID;
- (void)setLastIgnoreAwemeID:;
- (void)setPushUserInfo:;
- (id)pushUserInfo;
- (void)clearCountOfIgnoreDislikeElement;
- (void)clearCountOfIgnoreDislikeElementIfNeeded;
- (BOOL)canShowPushDislikeElementByCount;
- (id)currentCountOfIgnoreDislikeElement;
- (id)init;
- (void)appDidBecomeActive:;
- (void).cxx_destruct;
- (void)setIgnoreCount:;
- (id)ignoreCount;
+ (id)sharedManager;
@end
