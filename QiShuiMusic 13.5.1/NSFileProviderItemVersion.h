@interface NSFileProviderItemVersion : NSObject
@property (nonatomic) NSString lastEditorDeviceName;
@property (nonatomic) NSData contentVersion;
@property (nonatomic) NSData metadataVersion;
- (id)init;
- (BOOL)isEmpty;
- (id)contentVersion;
- (id)initWithContentVersion:metadataVersion:;
- (id)versionRewritingBeforeFirstSync;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)lastEditorDeviceName;
- (id)initWithContentVersion:metadataVersion:lastEditorDeviceName:;
- (id)metadataVersion;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)beforeFirstSyncComponent;
@end
