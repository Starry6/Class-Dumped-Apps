@interface BMPublicStreamUtilities : NSObject
+ (id)storeConfigurationForStream:;
+ (id)storeConfigurationForStream:protectionClass:;
+ (id)streamPathForStream:;
+ (id)streamIdentifiers;
+ (long long)streamForStreamIdentifier:;
+ (id)streamIdentifierForStream:;
+ (BOOL)writeAllowedForStream:processIdentifier:;
+ (unsigned long long)domainForStream:;
+ (id)allowedStreamWriteIdentifiersForStream:;
@end
