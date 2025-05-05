@interface OTATaskingAgentClient : NSObject
- (id)init;
- (unsigned int)uidForUser:;
- (BOOL)setPreference:forUser:inDomain:toValue:;
- (void).cxx_destruct;
- (id)crashreporterKey;
- (id)awdKey;
- (BOOL)deletePreference:forUser:inDomain:;
+ (id)sharedClient;
@end
