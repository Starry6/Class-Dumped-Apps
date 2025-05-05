@interface NSFileProviderEnumerationProperties : FPEnumerationSettings
@property (nonatomic) NSArray fileTypes;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSString enumeratingApplicationBundleIdentifier;
@property (nonatomic) NSString enumeratedItemIdentifier;
- (id)userInfo;
- (id)enumeratedItemIdentifier;
- (id)enumeratingApplicationBundleIdentifier;
- (void)setEnumeratingApplicationBundleIdentifier:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)fileTypes;
- (void)setFileTypes:;
- (void)setEnumeratedItemIdentifier:;
@end
