@interface AWEProfileExtensionAreaScrollableHintManager : NSObject
@property (nonatomic) <AWEProfileExtensionAreaScrollableHintExecuaterProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)prepareWithCompletion:;
@end
