@interface OSAServicesClient : NSObject
- (id)init;
- (void)dealloc;
- (unsigned int)uidForUser:;
- (id)queryKey:;
- (BOOL)setPreference:forUser:inDomain:toValue:;
- (void).cxx_destruct;
- (id)crashreporterKey;
- (id)awdKey;
- (BOOL)deletePreference:forUser:inDomain:;
+ (id)sharedClient;
@end
