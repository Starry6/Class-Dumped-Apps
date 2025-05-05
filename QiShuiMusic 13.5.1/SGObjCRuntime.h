@interface SGObjCRuntime : NSObject
+ (unsigned long long)arityForBlockAtIndex:inSelector:instanceMethod:ofProtocol:;
+ (unsigned long long)_arityForBlockAtIndex:inSelector:instanceMethod:ofProtocol:seenProtocols:foundSelector:;
@end
