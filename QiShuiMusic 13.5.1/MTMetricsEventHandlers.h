@interface MTMetricsEventHandlers : MTEventHandlers
@property (nonatomic) MTClickEventHandler click;
@property (nonatomic) MTEnterEventHandler enter;
@property (nonatomic) MTExitEventHandler exit;
@property (nonatomic) MTFlexibleEventHandler flexible;
@property (nonatomic) MTImpressionsEventHandler impressions;
@property (nonatomic) MTPageEventHandler page;
@property (nonatomic) MTSearchEventHandler search;
@property (nonatomic) MTAccountEventHandler account;
@property (nonatomic) MTDialogEventHandler dialog;
@property (nonatomic) MTMediaEventHandler media;
- (id)account;
- (id)page;
- (id)impressions;
- (id)search;
- (id)exit;
- (id)enter;
- (void).cxx_destruct;
- (id)media;
- (id)dialog;
- (id)click;
- (id)flexible;
- (void)registerDefaultEventHandlers;
- (Class)baseDataProviderClass;
@end
