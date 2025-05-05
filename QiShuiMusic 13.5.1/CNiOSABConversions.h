@interface CNiOSABConversions : NSObject
+ (id)os_log;
+ (id)stringFromABBytes:length:;
+ (id)dateFromABBytes:length:;
+ (id)dataFromABBytes:length:;
+ (id)numberFromIntegerABBytes:length:;
+ (id)contactFromABPerson:uniqueKeysToConvert:mutable:;
+ (void)updateContact:fromABPerson:keysToConvert:availableKeyDescriptor:;
+ (id)arrayByMappingTransform:onCFArray:;
@end
