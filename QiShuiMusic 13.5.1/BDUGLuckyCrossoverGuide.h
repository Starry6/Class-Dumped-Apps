@interface BDUGLuckyCrossoverGuide : NSObject
@property (nonatomic) BDUGLuckyCrossoverGuideModel guideModel;
@property (nonatomic) NSDictionary crossTrackerInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__recordForDayFrequencyControl:;
- (BOOL)ABTestShouldShowCrossoverGuide;
- (id)__ABTestShouldShowCrossoverGuide;
- (BOOL)__canShowCrossGuide:;
- (BOOL)__canShowForActivityFrequencyControl:;
- (BOOL)__canShowForDayFrequencyControl:;
- (void)__recordForActivityFrequencyControl:;
- (void)__recordForFrequencyControl:;
- (void)__retryCrossGuide;
- (void)__trackerWithActionName:failReason:;
- (id)crossTrackerInfo;
- (id)guideModel;
- (void)handleCrossoverGuide:crossTrackerInfo:;
- (void)setCrossTrackerInfo:;
- (void)setGuideModel:;
- (void).cxx_destruct;
+ (void)__appSettingsUpdate;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
