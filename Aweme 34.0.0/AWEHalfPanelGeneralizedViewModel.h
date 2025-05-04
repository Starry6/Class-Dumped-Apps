@interface AWEHalfPanelGeneralizedViewModel : NSObject
@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (nonatomic) <AWESearchHalfPanelInteractionProtocal> delegate;
@property (nonatomic) NSDictionary logParamDict;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParamsWithButtonType:;
- (id)logParamDict;
- (void)trackWhenClickExit;
- (void)trackWhenClickHeader;
- (void)trackWhenSlideExit;
- (void)setLogParamDict:;
- (void)trackWhenShow;
- (double)startTimestamp;
- (double)endTimestamp;
- (void)setModel:;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setStartTimestamp:;
- (void)setDelegate:;
- (void)setEndTimestamp:;
@end
