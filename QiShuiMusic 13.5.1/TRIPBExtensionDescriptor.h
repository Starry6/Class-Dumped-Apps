@interface TRIPBExtensionDescriptor : NSObject
@property (nonatomic) NSInteger wireType;
@property (nonatomic) NSInteger alternateWireType;
@property (nonatomic) I fieldNumber;
@property (nonatomic) # containingMessageClass;
@property (nonatomic) C dataType;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL packable;
@property (nonatomic) # msgClass;
@property (nonatomic) NSString singletonName;
@property (nonatomic) TRIPBEnumDescriptor enumDescriptor;
@property (nonatomic) @ defaultValue;
- (void)dealloc;
- (BOOL)isPackable;
- (id)defaultValue;
- (unsigned char)dataType;
- (id)enumDescriptor;
- (Class)msgClass;
- (id)copyWithZone:;
- (long long)compareByFieldNumber:;
- (id)initWithExtensionDescription:;
- (id)singletonName;
- (id)singletonNameC;
- (unsigned int)fieldNumber;
- (int)wireType;
- (int)alternateWireType;
- (BOOL)isRepeated;
- (Class)containingMessageClass;
@end
