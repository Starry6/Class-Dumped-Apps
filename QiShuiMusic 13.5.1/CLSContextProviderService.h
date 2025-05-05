@interface CLSContextProviderService : NSObject
@property (nonatomic) NSString extensionIdentifier;
@property (nonatomic) NSString appIdentifier;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString localizedAppName;
- (id)appIdentifier;
- (id)init;
- (id)initWithExtension:;
- (id)extensionIdentifier;
- (void)disconnect;
- (id)appName;
- (id)localizedAppName;
- (void).cxx_destruct;
- (void)connectWithCompletionHandler:;
- (id)description;
- (void)getMainAppContextPathWithCompletion:;
- (void)updateDescendantsOfContextPath:completion:;
@end
