@interface WBSWebExtensionPortInfo : NSObject
@property (nonatomic) NSUUID extensionID;
@property (nonatomic) NSUUID sourceID;
@property (nonatomic) WKWebView sourceWebView;
@property (nonatomic) NSUUID destinationID;
@property (nonatomic) WKWebView destinationWebView;
@property (nonatomic) NSString destinationApplicationID;
- (void)setSourceID:;
- (id)sourceID;
- (id)extensionID;
- (void).cxx_destruct;
- (id)description;
- (void)setExtensionID:;
- (id)destinationID;
- (void)setDestinationID:;
- (id)initWithExtensionID:sourceID:sourceWebView:destinationID:destinationWebView:;
- (id)initWithExtensionID:sourceID:sourceWebView:destinationApplicationID:;
- (id)sourceWebView;
- (void)setSourceWebView:;
- (id)destinationWebView;
- (void)setDestinationWebView:;
- (id)destinationApplicationID;
- (void)setDestinationApplicationID:;
@end
