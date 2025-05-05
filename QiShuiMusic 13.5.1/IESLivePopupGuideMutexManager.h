@interface IESLivePopupGuideMutexManager : NSObject
@property (nonatomic) NSMapTable guideTable;
- (BOOL)removePopupGuide:withGuideType:;
- (id)currentGuideItem;
- (unsigned long long)currentGuideType;
- (id)guideTable;
- (BOOL)registerPopupGuideIfAvailable:withGuideType:;
- (void)setGuideTable:;
- (void).cxx_destruct;
+ (id)shared;
@end
