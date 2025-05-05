@interface AFDeviceContextHistoryConfiguration : NSObject
@property (nonatomic) BOOL keepsHistory;
@property (nonatomic) Q historyBufferSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)initWithKeepsHistory:historyBufferSize:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)keepsHistory;
- (unsigned long long)historyBufferSize;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
