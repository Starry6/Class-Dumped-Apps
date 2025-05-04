@interface AWEMusicDetailFeatureHelper : NSObject
@property (nonatomic) AWEMusicDetailDataContext dataContext;
- (id)dataContext;
- (void)trackLoginSource:;
- (void)trackLoginNotifyIfNeededWithEvent:;
- (void)setDataContext:;
- (void).cxx_destruct;
+ (id)helperWithDataContext:;
@end
