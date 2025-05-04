@interface AWEPostPageVideoSyncHandler : NSObject
@property (nonatomic) BOOL videoSyncUpdateDone;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishViewModel;
- (void)bindServices:;
- (BOOL)syncToToutiaoItemIsOn;
- (void)trackLegalAffairsToastShow;
- (BOOL)videoSyncUpdateDone;
- (void)setVideoSyncUpdateDone:;
- (void).cxx_destruct;
- (id)context;
@end
