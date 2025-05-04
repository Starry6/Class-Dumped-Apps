@interface AWEECVideoDetailService : HTSService
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoPlayerDidReadyForDisplay:;
- (void)enterVideoDetailWithDataController:onVC:tag:aid:initialIndex:params:logExtraDict:dataControllerChangedBlock:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
@end
