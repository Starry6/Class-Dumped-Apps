@interface WebCDMSessionAVContentKeySessionDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)contentKeySession:didProvideContentKeyRequest:;
- (void)invalidate;
- (id)initWithParent:;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:;
@end
