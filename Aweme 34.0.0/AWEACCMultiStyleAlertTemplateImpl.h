@interface AWEACCMultiStyleAlertTemplateImpl : NSObject
@property (nonatomic) @? configBlock;
@property (nonatomic) BOOL shouldConfigViewBeforeShow;
@property (nonatomic) <ACCMultiStyleAlertBaseParamsProtocol> params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setConfigBlock:;
- (id)configBlock;
- (id)trackerType;
- (id)initWithParamsProtocol:configBlock:;
- (void)p_configView;
- (BOOL)shouldConfigViewBeforeShow;
- (void)setShouldConfigViewBeforeShow:;
- (void)show;
- (void)dismiss;
- (void).cxx_destruct;
- (id)params;
- (void)setupView;
- (id)createParams;
@end
