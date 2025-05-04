@interface AWESearchVideoDeduplicationContext : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) double playTime;
@property (nonatomic) double progressTime;
@property (nonatomic) BOOL isFromDetail;
@property (nonatomic) UIViewController searchViewController;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setPlayTime:;
- (double)progressTime;
- (void)setProgressTime:;
- (void)setIsFromDetail:;
- (BOOL)isFromDetail;
- (id)searchViewController;
- (void)setSearchViewController:;
- (double)playTime;
- (void).cxx_destruct;
@end
