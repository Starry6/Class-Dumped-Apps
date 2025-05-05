@interface WKRBSAssertionDelegate : NSObject
@property (nonatomic) @? prepareForInvalidationCallback;
@property (nonatomic) @? invalidationCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)assertion:didInvalidateWithError:;
- (void)dealloc;
- (void)assertionWillInvalidate:;
- (id)invalidationCallback;
- (id)prepareForInvalidationCallback;
- (void)setPrepareForInvalidationCallback:;
- (void)setInvalidationCallback:;
@end
