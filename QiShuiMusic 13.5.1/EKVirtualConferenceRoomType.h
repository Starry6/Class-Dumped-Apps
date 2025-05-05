@interface EKVirtualConferenceRoomType : NSObject
@property (nonatomic) NSString originatingExtensionIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString extensionBundleIdentifier;
- (id)extensionBundleIdentifier;
- (id)identifier;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithTitle:identifier:extensionBundleIdentifier:;
- (id)originatingExtensionIdentifier;
+ (void)virtualConferenceRoomTypesWithCompletion:queue:;
@end
