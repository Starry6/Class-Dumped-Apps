@interface SFFormAutoFillFrameHandle : NSObject
@property (nonatomic) _WKFrameHandle frameHandle;
@property (nonatomic) NSNumber pageID;
@property (nonatomic) WBSGlobalFrameIdentifier webFrameIdentifier;
@property (nonatomic) NSURL webui_URL;
@property (nonatomic) ^{__SecTrust=} webui_serverTrust;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)pageID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)frameHandle;
- (id)webui_URL;
- (id)webui_serverTrust;
- (id)initWithFrameHandle:URL:serverTrust:pageID:;
- (id)webFrameIdentifier;
- (id)initWithWebProcessPlugInFrame:;
+ (BOOL)supportsSecureCoding;
@end
