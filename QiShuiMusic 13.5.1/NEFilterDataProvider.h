@interface NEFilterDataProvider : NEFilterProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)handleNewFlow:;
- (void)handleRulesChanged;
- (void)applySettings:completionHandler:;
- (void)resumeFlow:withVerdict:;
- (id)handleInboundDataFromFlow:readBytesStartOffset:readBytes:;
- (id)handleOutboundDataFromFlow:readBytesStartOffset:readBytes:;
- (id)handleInboundDataCompleteForFlow:;
- (id)handleOutboundDataCompleteForFlow:;
- (id)handleRemediationForFlow:;
- (void)updateFlow:usingVerdict:forDirection:;
@end
