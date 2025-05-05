@interface GEOPhoneNumberResolver : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)resolvePhoneNumbers:handler:queue:;
+ (id)sharedResolver;
@end
