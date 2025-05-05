@interface NEProfilePayloadBase : NSObject
@property (nonatomic) NSDictionary payloadAtom;
@property (nonatomic) NSMutableDictionary pendingCertificates;
@property (nonatomic) NSDictionary pluginUpgradeInfo;
- (id)initWithPayload:;
- (void).cxx_destruct;
- (id)validatePayload;
- (id)getPreprocessedPayloadContents;
- (BOOL)setPostprocessedPayloadContents:;
- (BOOL)addCertificatePending:certificateTag:;
- (BOOL)addCertificatePending:certificateTag:accessGroup:;
- (id)payloadAtom;
- (void)setPayloadAtom:;
- (id)pendingCertificates;
- (void)setPendingCertificates:;
- (id)pluginUpgradeInfo;
- (void)setPluginUpgradeInfo:;
@end
