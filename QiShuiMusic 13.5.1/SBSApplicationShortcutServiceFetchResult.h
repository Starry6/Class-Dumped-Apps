@interface SBSApplicationShortcutServiceFetchResult : NSObject
@property (nonatomic) NSArray staticApplicationShortcutItems;
@property (nonatomic) NSArray dynamicApplicationShortcutItems;
@property (nonatomic) NSArray composedApplicationShortcutItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dynamicApplicationShortcutItems;
- (id)init;
- (void)encodeWithXPCDictionary:;
- (id)initWithStaticApplicationShortcutItems:dynamicApplicationShortcutItems:composedApplicationShortcutItems:;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)staticApplicationShortcutItems;
- (BOOL)isEqual:;
- (id)composedApplicationShortcutItems;
- (id)copyWithZone:;
@end
