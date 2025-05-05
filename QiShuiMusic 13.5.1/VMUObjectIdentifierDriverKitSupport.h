@interface VMUObjectIdentifierDriverKitSupport : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithObjectIdentifier:;
- (id)_fieldsFromStructureLayout:withOffset:;
- (id)_fieldsOfLegacyOSObject:;
- (id)_fieldsOfOSObject:startOffset:;
- (id)_fieldsOfRemoteDriverKitOSObject:;
- (id)_fieldsOfLocalDriverKitOSObject:;
- (id)classInfoForDriverKitOSClassScan;
- (id)classInfoForDriverKitOSMetaClassPrivate;
- (id)classInfoForDriverKitOSMetaClass;
- (id)classInfoForDriverKitMemory:length:atOffset:translatedIsa:symbol:;
- (id)driverKitClassInfoForMemory:length:remoteAddress:;
- (id)_labelForDriverKitOSClassLoadInformation:length:remoteAddress:;
- (id)_labelForDriverKitOSMetaClass:length:remoteAddress:;
- (id)labelForDriverKitMemory:length:remoteAddress:class:;
@end
