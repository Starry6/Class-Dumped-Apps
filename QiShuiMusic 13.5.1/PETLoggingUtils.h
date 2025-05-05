@interface PETLoggingUtils : NSObject
+ (id)domainStringForEvent:featureId:;
+ (id)keyStringForStringifiedPairs:;
+ (id)messageKeyStringForKey:;
+ (void)_pushToBuffer:keyStringForStringifiedPairs:;
+ (id)keyStringForEvent:featureId:stringifiedProperties:metaData:;
@end
