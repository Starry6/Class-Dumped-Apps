@interface AWEIMMixPhotoMangoShareModel : NSObject
@property (nonatomic) NSString idempotentId;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) AWEIMMixPhotoStartContext context;
@property (nonatomic) @? selectAction;
@property (nonatomic) @? dynamicActivityInfoAction;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSString createButtonTitle;
- (id)enterMethod;
- (id)enterFrom;
- (id)idempotentId;
- (id)dynamicActivityInfoAction;
- (id)selectAction;
- (id)initWithContext:selectAction:;
- (void)setDynamicActivityInfoAction:;
- (void).cxx_destruct;
- (id)context;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (id)createButtonTitle;
- (void)setCreateButtonTitle:;
@end
