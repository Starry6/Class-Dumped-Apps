@interface CNUIUserActionExtensionURLOpener : NSObject
@property (nonatomic) NSExtensionContext extensionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)extensionContext;
- (id)initWithExtensionContext:;
- (id)openURL:withScheduler:;
- (id)openURL:isSensitive:withScheduler:;
- (id)openURL:isSensitive:connectionEndpoint:withScheduler:;
@end
