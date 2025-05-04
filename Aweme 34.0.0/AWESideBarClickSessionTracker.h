@interface AWESideBarClickSessionTracker : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) NSString identification;
@property (nonatomic) NSString barID;
@property (nonatomic) NSString barTitle;
@property (nonatomic) NSString displayingSubtitleText;
@property (nonatomic) NSString moduleID;
- (id)barTitle;
- (void)setIdentification:;
- (id)barID;
- (void)setBarID:;
- (void)setBarTitle:;
- (id)displayingSubtitleText;
- (void)setDisplayingSubtitleText:;
- (id)initWithClickTrackModel:;
- (void)didEnterSideBarVC;
- (void)didLeaveSideBarVC;
- (void)setStartTime:;
- (id)description;
- (void).cxx_destruct;
- (double)startTime;
- (id)moduleID;
- (void)setModuleID:;
- (id)identification;
@end
