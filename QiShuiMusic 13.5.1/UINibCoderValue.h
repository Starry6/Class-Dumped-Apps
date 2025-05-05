@interface UINibCoderValue : NSObject
- (void)dealloc;
- (unsigned long long)byteLength;
+ (id)nibValueForObjectReference:key:scope:;
+ (id)nibValueForInt8:key:scope:;
+ (id)nibValueForInt16:key:scope:;
+ (id)nibValueForInt32:key:scope:;
+ (id)nibValueForInt64:key:scope:;
+ (id)nibValueForInteger:key:scope:;
+ (id)nibValueForBoolean:key:scope:;
+ (id)nibValueForDouble:key:scope:;
+ (id)nibValueForFloat:key:scope:;
+ (id)nibValueForBytes:length:key:scope:;
+ (id)nibValueRepresentingNilReferenceForKey:scope:;
@end
