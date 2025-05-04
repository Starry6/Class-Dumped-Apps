@interface AWEUGFCoinDeleteConfig : MTLModel
@property (nonatomic) AWEUGFCoinStayPopupInfo stayPopup;
@property (nonatomic) AWEUGPendantBubbleUIInfo reopenBubble;
@property (nonatomic) BOOL enableDelete;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnableDelete:;
- (BOOL)enableDelete;
- (id)stayPopup;
- (id)reopenBubble;
- (void)setStayPopup:;
- (void)setReopenBubble:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
