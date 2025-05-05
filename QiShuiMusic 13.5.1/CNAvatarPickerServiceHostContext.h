@interface CNAvatarPickerServiceHostContext : NSExtensionContext
@property (nonatomic) <CNAvatarPickerServiceHostProtocol> exportedObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remoteProxy;
- (id)exportedObject;
- (void)setExportedObject:;
- (void).cxx_destruct;
- (void)avatarPickerExtensionDidSelectItemWithImageData:memojiMetadata:;
- (void)avatarPickerExtensionDidFinishWithImageData:memojiMetadata:;
- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:identifier:;
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
