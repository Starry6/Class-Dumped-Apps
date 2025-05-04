@interface AWETextModeBackgroundManager : NSObject
@property (nonatomic) <ACCTextModeBackgroundModelProtocol> currentBackground;
@property (nonatomic) NSMutableArray backgrounds;
@property (nonatomic) q selectedIndex;
@property (nonatomic) q randomIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentBackground;
- (void)setBackgrounds:;
- (void)setCurrentBackground:;
- (id)backgrounds;
- (void)loadBackgrounds;
- (void)setRandomIndex:;
- (void)p_initSelectedIndex;
- (long long)randomIndex;
- (void)preloadInitBackground;
- (void)fetchAllBackgrounds;
- (void)switchToNext;
- (void)savedCurrentBackground;
- (id)init;
- (void)setSelectedIndex:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (long long)currentIndex;
@end
