@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket
- (id)initWithTraits:;
- (id)dataRequestKind;
- (void)cancel;
- (id)initWithRequest:traits:;
- (void).cxx_destruct;
- (void)performSubmitWithHandler:timeout:networkActivity:;
- (void)performSubmitWithHandler:auditToken:timeout:networkActivity:;
@end
