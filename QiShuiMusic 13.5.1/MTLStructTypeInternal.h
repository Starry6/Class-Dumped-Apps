@interface MTLStructTypeInternal : MTLStructType
@property (nonatomic) BOOL isIndirectArgumentBuffer;
@property (nonatomic) NSString typeName;
- (id)members;
- (id)typeName;
- (void)setIsIndirectArgumentBuffer:;
- (id)init;
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)dataType;
- (BOOL)isIndirectArgumentBuffer;
- (void)setMembers:count:;
- (id)memberByName:;
- (BOOL)isStructLayoutThreadSafeWith:;
- (id)description;
- (id)initWithMembers:count:typeName:;
- (id)initWithMembers:count:;
@end
