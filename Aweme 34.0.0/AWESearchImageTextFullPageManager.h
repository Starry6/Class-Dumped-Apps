@interface AWESearchImageTextFullPageManager : NSObject
@property (nonatomic) BOOL hasSaveState;
@property (nonatomic) Q muteType;
@property (nonatomic) Q playMode;
- (BOOL)hasSaveState;
- (unsigned long long)muteType;
- (void)saveImageTextIsPicScrollPause:muteType:;
- (void)setHasSaveState:;
- (void)setMuteType:;
- (id)init;
- (unsigned long long)playMode;
- (void)setPlayMode:;
+ (id)sharedManager;
@end
