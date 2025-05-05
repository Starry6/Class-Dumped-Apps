@interface ASCredentialRequestIconGenerator : NSObject
+ (id)headerIconForPresentationContext:;
+ (id)iconForPasswordLoginChoice:presentationContext:;
+ (id)passwordManagerIcon;
+ (id)iconForPublicKeyCredentialLoginChoiceWithPresentationContext:;
+ (id)systemPasskeyIcon;
+ (id)systemPasswordIcon;
+ (id)systemSecurityKeysIcon;
+ (id)alternativeSecurityKeysIcon;
+ (id)_iconForPresentationContext:size:;
+ (id)_iconForApplicationIdentifier:size:;
+ (id)_iconForData:scale:size:;
+ (id)_imageForIcon:size:;
+ (id)_providerIconForPasswordLoginChoice:;
+ (id)_keychainIcon;
+ (id)_iconForPasswordProviderBundleIdentifier:;
@end
