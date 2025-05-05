@interface IESLiveAfterComboHelper : NSObject
@property (nonatomic) IESLiveTouchInspectView inspectView;
@property (nonatomic) NSMutableDictionary giftAfterSendSchemaMap;
@property (nonatomic) BOOL enableAfterSendSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInspectView:;
- (void)clearGiftAfterSendSchemaMap;
- (void)createTouchEventInspectView;
- (void)didSetAttachingDIContext;
- (BOOL)enableAfterSendSchema;
- (id)giftAfterSendSchemaMap;
- (id)initWithDIContext:;
- (id)inspectView;
- (void)openSchemaWhenComboEndIfNeededWith:lastNode:;
- (void)removeTouchEventInspectViewForAuto:;
- (void)setEnableAfterSendSchema:;
- (void)setGiftAfterSendSchemaMap:;
- (void)updateAfterSendSchemaWith:giftID:;
- (void).cxx_destruct;
@end
