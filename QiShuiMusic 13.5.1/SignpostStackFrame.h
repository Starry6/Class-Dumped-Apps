@interface SignpostStackFrame : NSObject
@property (nonatomic) NSUUID symbolOwnerUUID;
@property (nonatomic) Q offset;
- (id)_serializableArrayRepresentation;
- (id)debugDescription;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)symbolOwnerUUID;
- (id)initWithUUID:offset:;
- (id)initWithArrayRepresentation:;
- (BOOL)isEqual:;
@end
