@interface PLTaggedPointer : NSObject
- (unsigned long long)payload;
- (id)initWithPayload:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)initWithSignedPayload:;
- (long long)signedPayload;
- (BOOL)isTaggedPointer;
+ (unsigned short)tag;
+ (id)newInstanceWithPayload:;
+ (BOOL)taggedPointersEnabled;
+ (id)newInstanceWithSignedPayload:;
@end
