@interface AWEXBridgeActionSheetDelegate : NSObject
@property (nonatomic) @? bridgeMethodCompletionHandler;
@property (nonatomic) @? delegateCompletionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionSheet:didClickButtonAtIndex:;
- (void)actionSheetDidClickCancelButton:;
- (void)actionSheetDidClickMaskArea:;
- (id)delegateCompletionHandler;
- (void)setBridgeMethodCompletionHandler:;
- (void)setDelegateCompletionHandler:;
- (id)initWithBridgeMethodCompletionHandler:AndDelegateCompletionHandler:;
- (id)bridgeMethodCompletionHandler;
- (void).cxx_destruct;
@end
