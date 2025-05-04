@interface AWELeftSideBarOpenBizPageCostInfoModel : NSObject
@property (nonatomic) double lastClickTime;
@property (nonatomic) double schemaBeginTime;
@property (nonatomic) double vcDisappearTime;
@property (nonatomic) NSString businessId;
@property (nonatomic) NSString schema;
- (double)lastClickTime;
- (void)setLastClickTime:;
- (void)setVcDisappearTime:;
- (void)setSchemaBeginTime:;
- (double)schemaBeginTime;
- (double)vcDisappearTime;
- (id)schema;
- (void)setSchema:;
- (id)businessId;
- (void).cxx_destruct;
- (void)setBusinessId:;
@end
