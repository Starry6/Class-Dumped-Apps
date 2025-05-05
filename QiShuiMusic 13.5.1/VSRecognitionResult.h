@interface VSRecognitionResult : NSObject
- (id)init;
- (unsigned long long)hash;
- (id)modelIdentifier;
- (id)release;
- (id)retain;
- (id)description;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
- (long long)elementCount;
- (id)recognitionResultByReplacingValueForClassIdentifier:withValue:;
- (BOOL)getElementClassIdentifier:value:atIndex:;
- (id)valueOfFirstElementWithClassIdentifier:;
- (id)createHandler;
- (void)setRecognitionAction:;
- (id)recognitionAction;
+ (id)recognitionResultWithModelIdentifier:classIdentifiers:values:;
@end
