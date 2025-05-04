@interface AWETeenInfoCrossInteractionViews : NSObject
@property (nonatomic) BOOL recorderEnterBarClosed;
@property (nonatomic) NSString pediaID;
@property (nonatomic) NSString imprId;
- (id)imprId;
- (void)setRecorderEnterBarClosed:;
- (void)setPediaID:;
- (BOOL)recorderEnterBarClosed;
- (id)pediaID;
- (void)setImprId:;
- (void).cxx_destruct;
+ (void)clearAllInfo;
+ (id)sharedInstance;
@end
