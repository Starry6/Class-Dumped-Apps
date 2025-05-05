@interface AKFollowUpFactoryImpl : NSObject
@property (nonatomic) NSString extensionIdentifier;
@property (nonatomic) NSString representingBundlePath;
@property (nonatomic) NSString bundleIconName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtensionIdentifier:;
- (id)_clearAction;
- (id)extensionIdentifier;
- (void)setRepresentingBundlePath:;
- (void).cxx_destruct;
- (id)representingBundlePath;
- (id)bundleIconName;
- (void)setBundleIconName:;
- (id)itemsForAltDSID:pushMessageInfo:fromIDMSPayload:;
- (id)itemIdentifiersRequiringNotificationClearFromPayload:;
- (BOOL)IsFollowUpItemNotificationForced:;
- (id)_itemFromPayload:pushMessageInfo:withAltDSID:;
- (id)_actionsFromPayload:pushMessageInfo:;
- (id)_actionFromInfo:pushMessageInfo:;
- (id)_notificationFromPayload:pushMessageInfo:;
- (id)actionWithTitle:andActionKey:;
@end
