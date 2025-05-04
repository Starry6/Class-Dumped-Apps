@interface AWEHotSearchGuideManager : NSObject
@property (nonatomic) AWEGuideWordModel guideWordModel;
- (void)setGuideWordModel:;
- (id)guideWordModel;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
