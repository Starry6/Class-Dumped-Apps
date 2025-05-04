@interface AWELiteActivityPopupTrackEvent : MTLModel
@property (nonatomic) NSString showEvent;
@property (nonatomic) NSString clickEvent;
@property (nonatomic) NSString closeEvent;
@property (nonatomic) NSString successEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showEvent;
- (void)setShowEvent:;
- (id)closeEvent;
- (void)setCloseEvent:;
- (id)successEvent;
- (void)setSuccessEvent:;
- (void)setClickEvent:;
- (void).cxx_destruct;
- (id)clickEvent;
+ (id)JSONKeyPathsByPropertyKey;
@end
