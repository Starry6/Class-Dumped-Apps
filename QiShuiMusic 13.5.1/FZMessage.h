@interface FZMessage : IMMessageItem
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (void)encodeWithIMRemoteObjectSerializedDictionary:;
- (id)initWithIMRemoteObjectSerializedDictionary:;
+ (BOOL)supportsSecureCoding;
@end
