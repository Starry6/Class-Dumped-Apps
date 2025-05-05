@interface IESVSWatermarkServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPreViewScene:;
- (id)createWatermarkWithData:containerView:markScene:;
- (void)deleteLocalWatermarkInfo:;
- (BOOL)isLandScapeStreamScene:;
- (BOOL)isShowScene:;
- (BOOL)isVerticalStreamScene:;
- (id)p_getIconWithWatermark:Scene:;
- (void)saveWatermarkInfo:seasonID:;
- (id)vsCreateWatermarkWithData:containerView:edgeInset:markScene:;
- (id)watermarkForLocalSave:;
+ (id)sharedInstance;
@end
