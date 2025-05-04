@interface AWEProfileExtensionAreaCardDouPLusController : NSObject
@property (nonatomic) AWEProfileExtensionAreaCommonParamModel commonParamModel;
@property (nonatomic) BOOL hasShowTracked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)passCardView:;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)setCommonParamModel:;
- (id)commonParamModel;
- (id)getDouPlusShowClickTrackParams;
- (void)setHasShowTracked:;
- (BOOL)hasShowTracked;
- (void).cxx_destruct;
+ (id)cardControllerWithCommonParam:;
@end
